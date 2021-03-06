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
   
    /*相较于普通数组 array可以直接赋值*/
    array<int,10> a2 = a1;

    /*array 中含有迭代器 所以可是使用范围for循环 从而不必担心数组越界*/
    for(auto i : a2)
    {
        cout << i << endl;
    }

    cout << "***********a2**********"<<endl;
    /*还可以重新赋值*/
    a2 = {10};             /*首元素为10,其他元素默认初始化*/

    for(auto i : a2)
    {
        cout << i << endl;
    }

    int a3[10]={};

    cout << "***********a3**********"<<endl;
    for(int i=0; i<10 ; ++i)
    {
        cout << a3[i] <<endl;
    }
    return 0;
}

