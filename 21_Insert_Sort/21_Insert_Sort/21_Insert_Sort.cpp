// 21_Insert_Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

void PrintArray(int a[], int nLen)
{
    for(int i = 0; i < nLen; ++i)
    {
        cout<<i<<" ";
    }

    cout<<endl;
}

void InsertSort(int a[], int nLen)
{
    PrintArray(a, nLen);
    for(int i = 1; i < nLen; ++i)
    {
        int nVal = a[i]; // the value to insert
        int j = i - 1;
        for(; j >= 0 && nVal < a[j]; --j)
        {
            a[j + 1] = a[j];
        }

        a[j+1] = nVal;
    }

    PrintArray(a, nLen);
}

int _tmain(int argc, _TCHAR* argv[])
{
    int a1[] = {9, 67, 45, 23, 54, 77};
    int a2[] = {9};

    InsertSort(a1, ARRAYSIZE(a1));
    InsertSort(a2, ARRAYSIZE(a2));

    getchar();
    return 0;
}

