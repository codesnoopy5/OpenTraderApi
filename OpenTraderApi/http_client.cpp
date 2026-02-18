#include "http_client.hpp"
#include <sstream>
#include <stdexcept>

HttpClient::HttpClient() {
    curl_ = curl_easy_init();
    if (!curl_) {
        throw std::runtime_error("Failed to initialize cURL");
    }
}

HttpClient::~HttpClient() {
    if (curl_) {
        curl_easy_cleanup(curl_);
    }
}

size_t HttpClient::writeCallback(void* contents, size_t size, size_t nmemb, std::string* response) {
    size_t totalSize = size * nmemb;
    response->append((char*)contents, totalSize);
    return totalSize;
}

std::string HttpClient::get(const std::string& url) {
    std::string response;
    curl_easy_setopt(curl_, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl_, CURLOPT_WRITEFUNCTION, writeCallback);
    curl_easy_setopt(curl_, CURLOPT_WRITEDATA, &response);

    CURLcode res = curl_easy_perform(curl_);
    if (res != CURLE_OK) {
        throw std::runtime_error("GET request failed: " + std::string(curl_easy_strerror(res)));
    }

    return response;
}

std::string HttpClient::post(const std::string& url, const Json::Value& data) {
    std::string response;
    std::string jsonStr = data.toStyledString();

    curl_easy_setopt(curl_, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl_, CURLOPT_POST, 1L);
    curl_easy_setopt(curl_, CURLOPT_POSTFIELDS, jsonStr.c_str());
    curl_easy_setopt(curl_, CURLOPT_WRITEFUNCTION, writeCallback);
    curl_easy_setopt(curl_, CURLOPT_WRITEDATA, &response);

    // 设置 HTTP Header (JSON 内容类型)
    struct curl_slist* headers = nullptr;
    headers = curl_slist_append(headers, "Content-Type: application/json");
    curl_easy_setopt(curl_, CURLOPT_HTTPHEADER, headers);

    CURLcode res = curl_easy_perform(curl_);
    curl_slist_free_all(headers);

    if (res != CURLE_OK) {
        throw std::runtime_error("POST request failed: " + std::string(curl_easy_strerror(res)));
    }

    return response;
}

Json::Value HttpClient::parseJson(const std::string& jsonStr) {
    Json::Value root;
    Json::CharReaderBuilder builder;
    std::istringstream iss(jsonStr);
    std::string parseErrors;

    if (!Json::parseFromStream(builder, iss, &root, &parseErrors)) {
        throw std::runtime_error("JSON parse error: " + parseErrors);
    }

    return root;
}

// 将 Json::Value 输出为字符串（禁用 Unicode 转义）
std::string HttpClient::jsonToString(const Json::Value& root) {
    Json::StreamWriterBuilder writer;
    writer.settings_["indentation"] = "";  // 紧凑格式（无缩进）
    writer.settings_["emitUTF8"] = false;   // 关键设置：启用 UTF-8 输出
    return Json::writeString(writer, root);
}
