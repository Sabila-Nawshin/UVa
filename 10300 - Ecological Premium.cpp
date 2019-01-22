#include <stdio.h>

int main()
{
	int T, N, size, temp, animal, friendliness, total;
	
	while (scanf ("%d", &T) != EOF)
	{
		total = 0;
		while (T--)
		{
			total = 0;
			scanf ("%d", &N);
			
			while (N--)
			{
				scanf ("%d %d %d", &size, &animal, &friendliness);
				
				temp = size * friendliness;
				
				total += temp;
			}
			
			printf ("%d\n", total);
		}
	}
	
	return 0;
}
