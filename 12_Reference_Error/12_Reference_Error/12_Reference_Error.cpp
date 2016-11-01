// 12_Reference_Error.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <assert.h>

float f;

float f1(float r)
{
    f = r * r;
    return f;
}

float& f2(float r)
{
    f = r * r;
    return f;
}

void f3()
{
    int a = 7;
    const int& cra = a;
    //cra = 10; // error C3892: 'cra' : you cannot assign to a variable that is const

    const int b = 8;
    //int& rb = b; // error C2440: 'initializing' : cannot convert from 'const int' to 'int &'
    const int& crb = b;
}

void f4()
{
    int a = 7;
    int b = 8;
    int& ra = a;
    int& rb = b;
    ra = rb; // copy the value of b to a 
}

int _tmain(int argc, _TCHAR* argv[])
{
    float f1(float = 5);
    float& f2(float = 5);
    float a = f1();
    //float& b = f1(); // error C2440: 'initializing' : cannot convert from 'float' to 'float &' 

    float c = f2();// copy value of f to c
    float& d = f2();

    assert(&c != &f);
    assert(&d == &f);

    f3();
    f4();

    getchar();
    return 0;
}

