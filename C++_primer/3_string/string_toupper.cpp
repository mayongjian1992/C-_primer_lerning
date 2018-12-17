#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(int argc,const char *argv[])
{

	string s1;
	while(cin>>s1)
	{
		for(auto &c : s1 )
		{
			c=toupper(c);
		}
		cout << s1 <<endl;
	}

	return 0;
}
