/*************************************************************************
	> File Name: 1-11.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月14日 星期五 15时45分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    std::cout << "input two value "<<std::endl;
    int val1,val2;
    std::cin >> val1 >> val2;

    if(val1 >val2)
    {
        int temp;
        temp=val1;
        val1=val2;
        val2=temp;
    }

    while(val1 <=val2)
    {
        std::cout << val1 <<" ";
        val1++;

    }

    std::cout << std::endl;
    return 0;
}
