/*************************************************************************
	> File Name: puge_15.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月14日 星期五 16时23分11秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main(int argc,const char *argv[])
{
    int count , val;
    int cnt;

    if(std::cin >> count)
    {
        cnt=1;
        while(cin >> val)
        {
            if(count == val)
            {
                ++cnt;
            }
            else
            {
                cout << count <<" occurs "<<cnt <<" times "<<std::endl;
                count =val;
                cnt=1;
            }
        }
                
        cout << count <<" occurs "<<cnt <<" times "<<std::endl;

    }

    return 0;
}
