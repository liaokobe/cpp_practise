// 4_Get_Offset.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

struct A
{
    int x;
    int y;
    int z;
};

int _tmain(int argc, _TCHAR* argv[])
{
    A* pa = NULL;
    int nOffset = (int)(&(pa)->z);

    cout<<nOffset<<endl;
    system("pause");
    return 0;
}

