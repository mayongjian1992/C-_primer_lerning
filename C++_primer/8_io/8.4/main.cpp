/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月09日 星期三 14时20分18秒

读取一个文件的内容 每次读取一行 先将其存入到vector<string>中 在输出到控制台
 ************************************************************************/

#include<iostream>
using std::cerr; using std::endl; using std::cout;
#include <fstream>                                   /*文件io流头文件*/
using std::ifstream;

#include <vector>
using std::vector;

#include <string>
using std::string;


int main(int argc,const char *argv[])
{
    ifstream input(argv[1]);               /*创建一个输入流对象 绑定到argv[1]*/
    
    if(!input)                             /* 若文件流创建失败 退出*/
    {
        cerr << "open stream is error"<<endl;
        return -1;
    }

    vector<string> vStr;                  /*创建一个string 容器*/
    string str;                           /*创建一个string*/

    while(input >> str)          /*调用getline函数*/
    {
        vStr.push_back(str);
    }

    vector<string>::const_iterator cit = vStr.cbegin();       /*只读迭代器 初始化为容器的首迭代器*/
    
    while(cit != vStr.cend() )                                /*循环输出*/
    {
        cout << *cit << endl;
        ++cit;
    }

    return 0;
}
