// 18_Tmp_Object.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class B
{
public:
    B(){ cout<<"B() "<<this<<endl;}
    ~B(){ cout<<"~B() "<<this<<endl;}
    B(B&){cout<<"B(B&) "<<this<<endl;}
    B(int i){ cout<<"B(int i) "<<this<<endl;}
};

B Play(B b)
{
    return b;
}

int _tmain(int argc, _TCHAR* argv[])
{
    B t1 = Play(5);
    B t2 = Play(t1);

    getchar();
    return 0;
}

