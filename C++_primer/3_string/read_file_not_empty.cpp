#include <iostream>
#include <string.h>

using namespace std;

int main(int argc,const char *argv[])
{
	string s;

	while(getline(cin,s))
	{
		if(!s.empty())
		{
			cout<<s<<endl;
		}
	}





	cout << endl;
	return 0;
}
