/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月03日 星期四 14时23分42秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Screen.h"

int main()
{
    Screen scr(10,10,'M');
    scr.move(4,4).set('$').display(cout);
    return 0;
}
