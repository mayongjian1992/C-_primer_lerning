/*************************************************************************
	> File Name: istringstream.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月03日 星期日 09时41分43秒
 ************************************************************************/

#include<iostream>
using std::cin;using std::cout;using std::endl; using std::cerr; 

#include <sstream>
using std::istringstream;
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <fstream>
using std::fstream; using std::ifstream;


struct PersonInfo
{
    string name;
    vector<string> phones;
};


void printInfo(const PersonInfo &info)
{
    cout << info.name <<" ";
    
    for(auto &ref : info.phones)
    {
        cout << ref  <<" ";
    }

    cout << endl;
    
    return ;
}


int main(int argc,const char *argv[])
{
    string line, word;
    vector<PersonInfo> people;

    fstream in(argv[1],ifstream::in);
    if(!in)
    {
        cerr << "open ifstream error..."<<endl;
        return -1;
    }

    while(std::getline(in,line) )
    {
        PersonInfo info;
        istringstream record(line);

        record >> info.name;
        while(record >> word)
        {
            info.phones.push_back(word);     
        }

        people.push_back(info);
    }


    for(auto &ref : people)
    {
        printInfo(ref);
    }


    return 0;
}
