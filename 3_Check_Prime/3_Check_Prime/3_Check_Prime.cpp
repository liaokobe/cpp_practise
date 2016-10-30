// 3_Check_Prime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <math.h>
#include <iostream>

using namespace std;

BOOL IsPrime(int n)
{
    int x = sqrt((float)n);
    int i = 2;
    for(; i<= x && (n % i > 0); ++i)
    {
    }

    return i > x;
}

void PrintPrime(int n)
{
    for(int i = 3; i <= n; i+=2)
    {
        cout<<i<<" is prime? "<<IsPrime(i)<<endl;

        bool bRet = true;
        for(int j = 2; j<i/2+1;j++)
        {
            if(i%j == 0)
            {
                bRet = false;
                break;
            }
        }

        if(bRet)
            cout<<i<<endl;
    }
}

int _tmain(int argc, _TCHAR* argv[])
{
    PrintPrime(101);
    system("Pause");
    return 0;
}

