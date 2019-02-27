/*************************************************************************
	> File Name: map_count.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月22日 星期五 16时58分23秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc,const char *argv[])
{
    map<string,size_t>word_count;

    string word;

    while(cin >> word)
    {
        ++word_count[word];
    }

    for(const auto &w : word_count)
    {
        cout << w.first <<" occurs "<< w.second << ((w.second >1) ? " time " : " times ")  <<endl;
    }


    return 0;
}

