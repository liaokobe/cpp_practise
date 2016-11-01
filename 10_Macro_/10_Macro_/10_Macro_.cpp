// 10_Macro_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#define STR(s) #s
#define CONS(a,b) (int)(a##e##b)
#define CONS2(a,b) (int)(a##b)

int _tmain(int argc, _TCHAR* argv[])
{
    cout<<STR(a test)<<endl;
    cout<<CONS(3,2)<<endl;
    cout<<CONS2(3,2)<<endl;

    getchar();
    return 0;
}

