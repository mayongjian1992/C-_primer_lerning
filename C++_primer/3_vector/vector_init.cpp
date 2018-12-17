#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
#include <cstdio>

using namespace std;

int main(int argc,char *argv[])
{
	vector<int> v_int;                         /*初始化一个空的vector容器对象 类型为int*/
	vector<string> v_string(10,"nimabi");      /*初始化一个容器对象 共10个string类型的元素 都是 nimabi*/
	vector<string> v_string_1=v_string;        /*拷贝初始化 v_string_1 等于 v_string*/
	return 0;
}

