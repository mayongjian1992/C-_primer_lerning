/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月26日 星期三 15时11分47秒
 ************************************************************************/

#include<iostream>
using std::cout; using std::cin; using std::endl;

#include <string>
using std::string;

#include "Screen.h"

int main(int argc,const char *argv[])
{
    Screen scr(10,20,'M');



    const Screen scr2(10,10);

    size_t a=scr2.some_member();   /*虽然 scr2 是一个const 对象 但是可以改变它的mutable成员*/
    cout << a << endl;

  //  scr2.move(5,5);    //scr2 是一个const对象 所以不能改变该对象的非mutable成员
    
    scr.move(5,5).set('A');
    scr.move(6,6).set('B');

    cout << scr.get(5,5)<< " "<<scr.get(6,6)<<endl;
    
    Screen myScreen(5,3,'M');
    const Screen blank(5,3,'A');

    myScreen.set(3,1,'_').display(cout);
    blank.display(cout);
    return 0;
}

