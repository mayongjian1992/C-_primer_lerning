/*************************************************************************
	> File Name: main.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月21日 星期四 20时46分12秒
 ************************************************************************/

#include "HasPtr.h"
using namespace std;

int main(int argc,const char *argv[])
{
    HasPtr ptr1("mayongjian");
    HasPtr ptr2(ptr1);
    HasPtr ptr3;
    ptr3 = ptr2;

    cout << 
    return 0;
}

