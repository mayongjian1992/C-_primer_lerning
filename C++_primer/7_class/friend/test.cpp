/*************************************************************************
	> File Name: test.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月28日 星期五 16时40分40秒
 ************************************************************************/

#include<iostream>
using namespace std;

void f()
{
    return ;
}

class X
{
public:
    friend void fun(void) { return ; }
    X() {f();}
    void g();
    void h();

};

void X::g(){return f();}
void X::h() {return f();}


int main()
{
    X a;

    return 0;
}

