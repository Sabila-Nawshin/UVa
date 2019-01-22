#include <cstdlib>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int T, a, b, sum = 0;
	
	cin >> T;
	
	for (int loop = 0; loop < T; loop++)
	{
		cin >> a >> b;
		sum = 0;
		
		if (a % 2 == 0)
		{
			for (int i = a + 1; i <= b; i += 2)
				sum += i;
		}
		else
		{
			for (int i = a; i <= b; i += 2)
				sum += i;
		}
		
		cout << "Case " << loop + 1 << ": " << sum << endl;
	}
	
	return 0;
}
