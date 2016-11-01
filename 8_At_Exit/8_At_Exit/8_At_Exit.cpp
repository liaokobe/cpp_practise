// 8_At_Exit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdlib.h>
#include <iostream>
using namespace std;

void atexit1() {cout<<"atexit1 ..."<<endl;::_sleep(10000);}
void atexit2() {cout<<"atexit2 ..."<<endl; ::_sleep(5000);}

int _tmain(int argc, _TCHAR* argv[])
{
    atexit(atexit1);
    atexit(atexit2);

    cout<<"_tmain exit..."<<endl;
    return 0;
}

