/*************************************************************************
	> File Name: puge_15.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月14日 星期五 16时23分11秒
 ************************************************************************/
#include <iostream>
using namespace std;

int main(int argc,const char *argv[])
{
    int count;
    int val;

    if(std::cin >> count)
    {
        int cnt=1;
        while(std::cin >> val)
        {
            if(count == val)
            {
                cnt++;
            }
            else
            {
                std::cout << count << " occurs "<<cnt<< " times "<<std::endl;
                cnt = 1;
                count = val;
            }
        }
        
        std::cout << count << " occurs "<<cnt<< " times "<<std::endl;

    }
    return 0;

}
