#pragma once
#include <string>
#include <curl/curl.h>
#include <json/json.h>
class HttpClient {
public:
    HttpClient();
    ~HttpClient();
    // GET 请求
    std::string get(const std::string& url);
    // POST 请求 (发送 JSON)
    std::string post(const std::string& url, const Json::Value& data);
    // 解析 JSON 字符串
    static Json::Value parseJson(const std::string& jsonStr);

    static std::string jsonToString(const Json::Value& root);
private:
    CURL* curl_;
    static size_t writeCallback(void* contents, size_t size, size_t nmemb, std::string* response);
};