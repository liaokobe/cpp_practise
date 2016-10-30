// 6_Copy_Constructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A
{
    A(int n)
    {
        nValue = n;
    }

    A(A a)
    {
        nValue = a.nValue;
    }

private:
    int nValue;
};

int _tmain(int argc, _TCHAR* argv[])
{
    A a = 10;
    A b = a;
    return 0;
}

