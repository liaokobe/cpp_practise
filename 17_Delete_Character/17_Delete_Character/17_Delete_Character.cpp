// 17_Delete_Character.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char* DeleteChar(char* str, char c)
{
    if(!str)
    {
        return NULL;
    }

    char* head = str;
    char* p = str;

    while (*p)
    {
        if(*p != c)
        {
           *str++ = *p;
        }

        p++;
    }

    *str = 0;
    return head;
}

int _tmain(int argc, _TCHAR* argv[])
{
    char str[] = "abcabcabc";
    char* pRet = DeleteChar(str, 'b');

    cout<<pRet<<endl;
    getchar();

    return 0;
}

