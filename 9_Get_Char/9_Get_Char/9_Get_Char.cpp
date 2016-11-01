// 9_Get_Char.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    int i = 0;
    char c = 0;

    while (1)
    {
        i++;
        c = getchar(); // Assume we just input one character

        if(c != '\n')
        {
            char temp = getchar();
        }

        if(c == 'q' || c == 'Q')
        {
            cout<<"Get got "<<c<<", about to exit."<<endl;
            break;
        }
        else
        {
            cout<<i<<", we got "<<c<<endl;
        }
    }

    getchar();
    return 0;
}

