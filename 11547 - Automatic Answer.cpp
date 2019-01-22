#include <stdio.h>
#include <string.h>

int main()
{
	int N, T, length;
	long long ans;
	char num[100];
	
	scanf ("%d", &T);
	
	while (T--)
	{
		scanf ("%d", &N);
		
		ans = (315 * N) + 37460 - 498;
		
		sprintf (num, "%lld", ans);
		
		length = strlen (num);
		printf ("%c\n", num [length - 2]);
	}
	
	return 0;
}
