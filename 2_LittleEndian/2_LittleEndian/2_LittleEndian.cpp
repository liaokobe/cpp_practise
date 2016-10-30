// 2_LittleEndian.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>

BOOL IsCPULittleEndian()
{
    union w
    {
        int a;
        char b;
    }c;

    c.a = 1;
    return (c.b == 1);
}

BOOL IsCPULittleEndian2()
{
    union w
    {
        int a;
        char b;
    }c;

    c.a = 0x12345678;
    BOOL bTemp = ((void*)&c.a == (void*)&c.b);

    return (c.b == 0x78);
}

int _tmain(int argc, _TCHAR* argv[])
{
    BOOL bRet = IsCPULittleEndian();
    BOOL bRet2 = IsCPULittleEndian2();
    system("pause");
    return 0;
}

