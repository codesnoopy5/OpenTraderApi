// stdafx.cpp : 只包括标准包含文件的源文件
// OpenTraderApi.pch 将作为预编译头
// stdafx.obj 将包含预编译类型信息

#include "stdafx.h"

static HANDLE g_blackConsolehandle = NULL;
class CConsole
{
public:
    CConsole()
    {
        g_blackConsolehandle = NULL;
    }
    ~CConsole()
    {
        if (g_blackConsolehandle)
            CloseHandle(g_blackConsolehandle);
    }
    void Create()
    {
        if (g_blackConsolehandle == NULL)
        {
            AllocConsole();
            g_blackConsolehandle = GetStdHandle(STD_OUTPUT_HANDLE);
        }
    }
};

CConsole g_BlackConsole;

void WriteBlackCon(const char* strFormat, ...)
{
    if (g_blackConsolehandle == NULL)
        g_BlackConsole.Create();

    va_list listText;
    int lenOfList;
    char* text;
    va_start(listText, strFormat);
    lenOfList = _vscprintf( strFormat, listText) + 1;
    text = (char*)malloc(lenOfList*sizeof(char));
    vsprintf_s(text , lenOfList , strFormat , listText);
    printf(text);
    va_end(listText);
    unsigned long len = 0;
    SYSTEMTIME st;
    GetLocalTime(&st);
    CString strMsg;
    strMsg.Format("[%02d:%02d:%02d %03d]" , st.wHour, st.wMinute , st.wSecond, st.wMilliseconds);
    WriteConsole(g_blackConsolehandle , strMsg , strMsg.GetLength() , &len,NULL);
    WriteConsole(g_blackConsolehandle , text , (DWORD)strlen(text) , &len,NULL);
    free(text);
}
