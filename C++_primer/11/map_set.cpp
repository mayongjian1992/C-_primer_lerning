/*************************************************************************
	> File Name: map_set.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月22日 星期五 17时09分29秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

int main(int argc,const char *argv[])
{
    map<string,size_t> word_count;
	set<string> exclude = {"The", "But", "And", "Or", "An", "A", 
	                       "the", "but", "and", "or", "an", "a"};

    string word;
    while( cin >> word )
    {
        if(exclude.find(word) == exclude.end())
        {
            ++word_count[word];
        }
    }

    for( const auto &w : word_count )
    {
        cout << w.first << " occurs "<< w.second << ( (w.second > 1) ? " times " : " time ") << endl;
    }

    return 0;
}

