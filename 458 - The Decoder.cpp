#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	 
	while (getline (cin, s))
	{	
		char *str = &s[0];
		
		while (*str)
		{
			*str = *str - 7;
			str ++;
		}
		cout << s << "\n";
	}
	
	return 0;
}
