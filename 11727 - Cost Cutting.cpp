#include <iostream>
using namespace std;

int main ()
{
	int T;
	cin >> T;
	
	for (int loop = 0; loop < T; loop++)
	{
		int a[3], max = 0, min = 0;
		
		cin >> a[0] >> a[1] >> a[2];
		
		for (int i = 1; i < 3; i++)
		{
			if (a[i] > a[max])
				max = i;
			if (a[i] < a[min])
				min = i;
		}
		
		for (int i = 0; i < 3; i++)
		{
			if (i != max && i!= min)
			{
				cout << "Case " << loop + 1 << ": " << a[i] << endl;
				break;
			}
		}
	}
	
	return 0;
}
