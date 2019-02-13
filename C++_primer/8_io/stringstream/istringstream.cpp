/*************************************************************************
	> File Name: istringstream.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月02日 星期六 10时10分11秒
 ************************************************************************/

#include <iostream>
using std::cout; using std::cin; using std::endl;
using std::cerr;

#include <sstream>
using std::istringstream; using std::ostringstream;

#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include <vector>
using std::vector;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

void printInfo(const PersonInfo &info)
{
    cout << info.name << " ";

    for(auto &str : info.phones)
    {
        cout << str << " ";
    }

    cout <<endl;
    return ;
}

int main(int argc,const char *argv[])
{
    string line, word;
    vector<PersonInfo> people;
    
    ifstream in(argv[1]);
    if( !in )
    {
        cerr << "open ifstream error..."<<endl;
        return -1;
    }

    while(getline(in,line) )
    {
        PersonInfo info;
        std::istringstream records(line);
        records >> info.name;
        while(records >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    vector<PersonInfo>::const_iterator const_it = people.cbegin();
    while(const_it != people.cend() )
    {
        printInfo(*const_it);
        ++const_it;
    }
    
    return 0;
}

