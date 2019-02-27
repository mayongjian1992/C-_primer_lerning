/*************************************************************************
	> File Name: unique_ptr.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月19日 星期二 10时54分30秒
 ************************************************************************/

#include<iostream>
#include <memory>
#include <string>
using namespace std;

int main(int argc,const char *argv[])
{
    unique_ptr<string> p1(new string("mayongjian"));
    unique_ptr<string> p2(new string("12345567788"));

    /*使用前提 2个指针的类型一致*/
    swap(p1,p2);

    cout << *p1 <<endl;
    cout << *p2 << endl;

    unique_ptr<string> p3(new string("hello") );
    unique_ptr<string>p4;

    p4.reset(p3.release() );
    


    return 0;
}

