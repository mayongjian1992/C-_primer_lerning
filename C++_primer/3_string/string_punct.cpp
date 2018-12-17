#include <iostream>
#include <cctype>               /*ispunct()*/
#include <cstring>              /*string*/
#include <typeinfo>            /*typeid*/

using namespace std;
int main(int argc,const char *argv[])
{
	string s1="Hello World!!!!";

	decltype(s1.size()) punct_cnt=0;

	for(auto c:s1)
	{
		if(ispunct(c))
		{
			punct_cnt++;
		}
	}

	cout << punct_cnt << endl;


}
