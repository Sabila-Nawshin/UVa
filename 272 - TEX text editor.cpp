#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	
	int count = 0;
	 
	while (getline (cin, s))
	{	
		char *str = &s[0];
		
		while (*str)
		{
			if (*str == '"')
			{
				count ++;
				
				if (count % 2 == 1)
					cout << "``";
				else
					cout << "''";
			}
			else
				cout << *str;
				
			str ++;
		}
		cout << "\n";
	}
	
	return 0;
}
