#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	char a[101], b[101];
	
	while (1)
	{
		int flag = 0;
		cin >> a >> b;
		
		if (strcmp (a, "0") == 0 && strcmp (b, "0") == 0)
			break;
		
		int i = strlen (a) - 1, j = strlen (b) - 1, count = 0; 
		while (i >= 0 && j >= 0)
		{
			int num1 = a[i] - 48, num2 = b[j] - 48;
			
			if (flag)
				num1 += 1;
				
			flag = 0;
			
			if (num1 + num2 >= 10)
			{
				count ++;
				flag = 1;
			}
				
			i--;
			j--;
		}
		
		while (flag && j >= 0)
		{
			int num = b[j] - 48;
			if (flag)
			{
				if (num + 1 >= 10)
				{
					count ++;
				}
				else
					flag = 0;
			}
			
			j--;
		}
		
		while (flag && i >= 0)
		{
			int num = a[i] - 48;
			if (flag)
			{
				if (num + 1 >= 10)
				{
					count ++;
				}
				else
					flag = 0;
			}
			
			i--;
		}
		
		if (!count)
			cout << "No carry operation." << endl;
		else if (count == 1)
			cout << count << " carry operation." << endl;
		else
			cout << count << " carry operations." << endl;
	}
	
	return 0;
}

