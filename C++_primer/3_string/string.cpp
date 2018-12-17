#include <iostream>
#include <string.h>
using namespace std;

#if 0
int main(int argc,const char *argv[])
{

	string s1;
	cin>>s1;
	cout<<s1<<endl;
	
	return 0;
}

#endif 

int main(int argc,const char *argv[])
{
	string s="hello world!!!";      /*string 类 可变长字符集合 可以空初始化  拷贝初始化 赋值初始化*/
	string s1="hello\nworld!!";
	cout << s << endl;
	cout << s1 << endl;
	return 0;
}
