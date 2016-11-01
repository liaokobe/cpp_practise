// 13_Check_Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <assert.h>

int _tmain(int argc, _TCHAR* argv[])
{
    char str1[] = "abc";
    char str2[] = "abc";
    const char str3[] = "abc";
    const char str4[] = "abc";

    assert(str1 != str2 && str1 != str3 && str1 != str4 
        && str2 != str3 && str2 != str4
        && str3 != str4);

    char* str5 = "abc";
    char* str6 = "abc";
    const char* str7 = "abc";
    const char* str8 = "abc";

    assert(str5 == str6 && str6 == str7 && str7 == str8);

    getchar();
    return 0;
}

