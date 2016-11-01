// 15_Array_Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    char* str[] = {"Welcome", "To", "Fortemedia", "Nanjing"};
    char** p = str + 1; // *p("To")
    str[0] = (*p++) + 2; // (*p++)(char*)("To"), *p("Fortemedia")
    str[1] = *(p+1);// *(p+1)(Nanjing)
    str[2] = p[1]+ 3;// jing, *p(jing)
    str[3] = p[0] + (str[2] - str[1]);

    cout<<str[0]<<" "<<str[1]<<" "<<str[2]<<" "<<str[3]<<endl;
    getchar();
    return 0;
}

