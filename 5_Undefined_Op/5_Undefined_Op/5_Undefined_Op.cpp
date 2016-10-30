// 5_Undefined_Op.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    int i = 7;
    cout<<i++*i++<<endl;

    char a;
    cin>>a;
    return 0;
}

