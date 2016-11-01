// 14_Const_Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
    const char* node1 = "abc";
    char* const node2 = "abc";

    //node1[2] = 'k'; 
    // error C3892: 'node1' : you cannot assign to a variable that is const

    //*node1[2] = 'k';
    //error C2100: illegal indirection; 
    //error C3892: 'node1' : you cannot assign to a variable that is const

    //*node1 = "xyz"; 
    // error C2440: '=' : cannot convert from 'const char [4]' to 'const char'

    node1 = "xyz";

    node2[2] = 'k';//runtime-error
    //*node2[2] = 'k'; //error C2100: illegal indirection
    //*node2 = "xyz";//error C2440: '=' : cannot convert from 'const char [4]' to 'char'
    //node2 = "xyz";//error C3892: 'node2' : you cannot assign to a variable that is const

    return 0;
}

