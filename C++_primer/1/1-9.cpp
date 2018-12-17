/*************************************************************************
	> File Name: 1-9.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月14日 星期五 15时04分21秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    int val=50;
    while(val <=100)
    {
        sum+=val;
        ++val;
    }

    std::cout << "the 50 - 100 sum is "<<sum<<std::endl;
    return 0;
}





#if 0
int main()
{

    int a=50,b=100;
    int mid=51/2;

    int sum=0;

    while(mid !=0 )
    {
        sum+=(a+b);
        --mid;
    }

    std::cout << "the 50 - 100 sum is "<<sum<<std::endl;
    
    return 0;
}

#endif 

