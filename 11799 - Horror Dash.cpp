#include <stdio.h>

int main()
{
	int T, a, max = -1, N, i;
	
	scanf ("%d", &T);
	
	for (i = 0; i < T; i++)
	{
		max = -1;
		scanf ("%d ", &N);
		
		while (N--)
		{
			scanf ("%d", &a);
			
			if (a > max)
				max = a;
		}
		
		printf ("Case %d: %d\n", i + 1, max);
	}
	
	return 0;
}
