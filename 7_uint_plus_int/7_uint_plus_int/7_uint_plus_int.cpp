// 7_uint_plus_int.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    unsigned int x = 7;
    int y = -7;
    unsigned int z = x + y;
    cout<<"(uint)7 + (int)-7 = "<<z<<endl;
    
    y = -8;
    z = x + y;

    cout<<"(uint)7 + (int)-8 = "<<z<<endl;
    cin>>z;
    return 0;
}

