// 16_Get_Hex.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

char* GetHexString(long num)
{
    int i = 0;
    char* buf = (char*)malloc(11);
    char* temp;

    buf[0] = '0';
    buf[1] = 'x';
    buf[10] = '\0';
    temp = buf + 2;

    for(int i = 0; i < 8; ++i)
    {
        temp[i] = (char)(num<<4 * i>>28); // num<<(4*i)>>28
        cout<<(int)temp[i]<<endl;
        temp[i] = temp[i] >= 0 ? temp[i] : temp[i] + 16;
        temp[i] = temp[i] < 10 ? temp[i] + 48 : temp[i] + 55; // 0-9, A-F
    }

    return buf;
}

int _tmain(int argc, _TCHAR* argv[])
{
    cout<<"Input an integer: ";
    int num = 0;
    cin>>num;

    char* p = GetHexString(num);
    cout<<"Hex: "<<p<<endl;
    free(p);

    system("pause");
    return 0;
}

