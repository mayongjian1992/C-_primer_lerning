/*************************************************************************
	> File Name: unique_ptr_test.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月22日 星期五 15时59分09秒
 ************************************************************************/

#include<iostream>
#include <memory>
#include <string>
using namespace std;
int main(int argc,const char *argv[])
{
    unique_ptr<string> p1;
    p1 = unique_ptr<string>(new string("mayongjian"));
    cout << *p1 <<endl;
    return 0;
}

