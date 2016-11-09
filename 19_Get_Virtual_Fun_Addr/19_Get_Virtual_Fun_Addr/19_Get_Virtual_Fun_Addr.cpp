// 19_Get_Virtual_Fun_Addr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun1(){cout<<"Base::fun1"<<endl;}
    virtual void fun2(){cout<<"Base::fun2"<<endl;}
    virtual void fun3(){cout<<"Base::fun3"<<endl;}

private:
    int num1;
    int num2;
};

typedef void (*Fun)(void);

int _tmain(int argc, _TCHAR* argv[])
{
    Base b;

    Fun pFun;

    // Get the address of Base::fun1()
    pFun = (Fun)*((int*)*(int*)(&b) + 0);
    pFun();

    // Get the address of Base::fun2()
    pFun = (Fun)*((int*)*(int*)(&b) + 1);
    pFun();

    // Get the address of Base::fun3()
    pFun = (Fun)*((int*)*(int*)(&b) + 2);
    pFun();

    getchar();
    return 0;
}

