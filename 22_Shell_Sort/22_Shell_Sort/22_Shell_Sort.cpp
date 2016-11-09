// 22_Shell_Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

void PrintArray(int a[], int nLen)
{
    for(int i = 0; i < nLen; ++i)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
}

void ShellSort(int a[], int nLen)
{
    PrintArray(a, nLen);

    for(int h = nLen / 2; h > 0; h /= 2)
    {
        for(int i = h; i < nLen; i++)
        {
            int nVal = a[i]; // the value to insert
            int j = i - h;
            for(; j >= 0 && nVal < a[j]; j -= h)
            {
                a[j + h] = a[j];
            }

            a[j+h] = nVal;
        }
    }
    

    PrintArray(a, nLen);
}

int _tmain(int argc, _TCHAR* argv[])
{
    int a1[] = {9, 67, 45, 23, 54, 77, 88, 66, 44, 33, 22, 56};
    int a2[] = {9};

    ShellSort(a1, ARRAYSIZE(a1));
    ShellSort(a2, ARRAYSIZE(a2));

    getchar();
    return 0;
}



