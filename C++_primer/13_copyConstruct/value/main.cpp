/*************************************************************************
	> File Name: main.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月21日 星期四 15时09分47秒
 ************************************************************************/

#include "HasPtr.h"

using namespace std;

int main(int argc,const char *argv[])
{
    HasPtr ptr1("mayongjian");
    HasPtr ptr2("12312312312");
    HasPtr ptr3 = ptr1;

    ptr1 = ptr2;

    cout << ptr1.deref() << " " <<ptr2.deref() <<" "<< ptr3.deref() << endl;

    ptr3 = ptr3;

    cout << ptr3.deref() <<endl;

    return 0;
}

