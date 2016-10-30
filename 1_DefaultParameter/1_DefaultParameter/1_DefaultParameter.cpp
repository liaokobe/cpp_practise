// 1_DefaultParameter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
using namespace std;

class A
{
public:
    virtual void Fun(int number = 10)
    {
        std::cout << "A::Fun with number " << number << endl;
    }
};

class B:public A
{
public:
    virtual void Fun(int number = 20)
    {
        std::cout << "B::Fun with number " << number << endl;
    }
};

int _tmain(int argc, _TCHAR* argv[])
{
    B b;
    A &a = b;
    A *aa = new B;
    aa->Fun();
    a.Fun();

    system("pause");
}
