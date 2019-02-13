/*************************************************************************
	> File Name: test.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月02日 星期六 17时07分31秒
 ************************************************************************/

#include<iostream>
#include <array>
using namespace std;
int main(int argc,const char *argv[])
{
    array<int,10> a={};
    a={1,2,3,4,5};

    for(auto i : a)
    {
        cout << i <<" ";
    }

    cout <<endl;
    
    return 0;
}

