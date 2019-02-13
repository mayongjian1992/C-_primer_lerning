/*************************************************************************
	> File Name: main.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月11日 星期一 13时40分32秒
 ************************************************************************/

#include <iostream>
#include <initializer_list>
#include <string>
using namespace std;

void err_msg(const string &item, initializer_list<string> ls)
{
    cout << item << endl;
    for(auto &str : ls)
    {
        cout << str << endl;
    }
    return ;
}

int main(int argc,const char *argv[])
{
    string item("powervision");
    err_msg(item, {"mayongjian","Pv0842","18519760989"} );
    return 0;
}

