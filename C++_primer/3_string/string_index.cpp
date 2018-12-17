#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(int argc,char *argv[])
{
	string s="hello world!!!";

	for(decltype(s.size()) index=0; index!=s.size() && !isspace(s[index]); index ++ )
	{
		s[index]=toupper(s[index]);
	}

	cout << s << endl;
	return 0;
}
