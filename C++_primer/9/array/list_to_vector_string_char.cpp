/*************************************************************************
	> File Name: list_to_vector_string_char.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月02日 星期六 17时52分18秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <vector>
#include <string>
#include <list>
using namespace std;

int main(int argc,const char *argv[])
{
    list<const char*> LChar = {"mayongjian","19920706","18519760989"};
    vector<string> VStr(LChar.cbegin(), LChar.cend());

    for(auto &str : VStr)
    {
        cout << str << " ";
    }

    cout << endl;
    
    return 0;
}

