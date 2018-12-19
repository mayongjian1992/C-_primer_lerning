/*************************************************************************
	> File Name: 3-4_.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月19日 星期三 14时56分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(int argc,const char *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.size() == s2.size())
    {
        cout << " the two string's size is same "<<endl;
    }
    else
    {
        cout << " the two string's size is not same "<<endl;
        if( s1.size() > s2.size() )
        {
            cout << s1 <<endl;
        }
        else
        {
            cout << s2 << endl;
        }

    }

    return 0;
}

