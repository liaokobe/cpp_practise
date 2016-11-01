// 11_Sizeof_Virtual_Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
    //1
};

class B
{
    //1
};

class C:virtual public A, public B
{
    //4(vptr_c_a)
};

class D
{
    //1
};

class E: virtual public C, virtual public D
{
    //16(vptr_e_c,sizeof(C),vptr_e_d,sizeof(D))
};

class F: public C, virtual public D
{
    //8(sizeof(C),vptr_f_d)
};

class G:virtual public E, virtual public F
{
    // 28(vtpr_g_e, sizeof(E), vptr_g_f, sizeof(F), -sizeof(C))
};

int _tmain(int argc, _TCHAR* argv[])
{
    G* pG = new G();

    cout<<"sizeof(A) = "<<sizeof(A)<<endl;
    cout<<"sizeof(B) = "<<sizeof(B)<<endl;
    cout<<"sizeof(C) = "<<sizeof(C)<<endl;
    cout<<"sizeof(D) = "<<sizeof(D)<<endl;
    cout<<"sizeof(E) = "<<sizeof(E)<<endl;
    cout<<"sizeof(F) = "<<sizeof(F)<<endl;
    cout<<"sizeof(G) = "<<sizeof(G)<<endl;

    getchar();
    return 0;
}

