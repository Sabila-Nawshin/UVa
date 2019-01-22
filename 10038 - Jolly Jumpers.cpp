#include <cstdlib>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	//cin.tie(0);
	
	int n, *dif, *now;
	
	while (cin >> n)
	{
		int i = 0, flag = 0, j;
		dif = (int*) malloc (n * sizeof (int));
		now = (int*) malloc (n * sizeof (int));
		
		while (i != n)
		{
			cin >> now [i];
			dif [i] = 0;
			i++;
		}
		
		i = 0, j = 0;
		while (i != n - 1)
		{
			dif [i] = abs(now [j + 1] - now [j]);
			i++;
			j++;
		}
		
		sort (dif, dif + n);
		
		i = 1;
		while (i != n)
		{
			flag = std::binary_search (dif, dif + n, i);
			
			if (!flag)
				break;
			i++;
		}
		
		if (n == 1)
			cout << "Jolly" << endl;
		else if (!flag)
			cout << "Not jolly" << endl;
		else if (flag)
			cout << "Jolly" << endl;
	}
	
	return 0;
}
