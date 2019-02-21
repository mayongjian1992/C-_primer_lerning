/*************************************************************************
	> File Name: main.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月18日 星期一 15时24分24秒
 ************************************************************************/

#include "HasPtr.h"
using namespace std;

//HasPtr ptr;

struct st_test
{
    HasPtr ptr; 
    int a;
};


void test_func(HasPtr &ptr)
{
    HasPtr my_ptr("mayyongjian");
    ptr = my_ptr;
    return ;
}

int main(int argc,const char *argv[])
{
    HasPtr ptr;

    test_func(ptr);

    cout << ptr.deref() << endl; 
    return 0;
}

