/*************************************************************************
	> File Name: array.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月02日 星期六 16时47分09秒
 ************************************************************************/

#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <array>
using std::array;

int main(int argc,const char *argv[])
{
    array<int,10> a1 = {0,1,2,3,4,5,6,7,8,9};
    array<int,10> a2 = a1;

    for(auto i : a2)
    {
        cout << i << endl;
    }

    a2 = {10};

    for(auto i : a2)
    {
        cout << i << endl;
    }

    int a3[10]={};

    for(int i=0; i<10 ; ++i)
    {
        cout << a3[i] <<endl;
    }
    return 0;
}

