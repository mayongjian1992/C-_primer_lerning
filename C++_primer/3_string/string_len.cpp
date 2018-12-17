#include <iostream>
#include <string>

using namespace std;

int main(int argc,const char *argv[])
{
	string s1(10,'c');
	cout << s1 <<endl;

	auto len=s1.size();    /*让编译器自动计算变量类型 C++11 才支持*/

	cout <<len<<endl;
	return 0;
}


