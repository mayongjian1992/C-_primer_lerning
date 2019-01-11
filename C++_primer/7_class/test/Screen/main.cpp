/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月11日 星期五 19时37分17秒
 ************************************************************************/

#include "Screen.h"

using namespace std;

int main(int argc,const char *argv[])
{
    Screen scr(10,10,'A');
    const Screen scr1(10,10,'B');

    scr.display(cout);
    scr1.display(cout);

    scr.get(5,5);
    scr.move(2,2);

    return 0;
}

