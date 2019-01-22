#include <stdio.h>

int main()
{
	int bin [9], max, sum;
	
	while (scanf ("%d %d %d %d %d %d %d %d %d", &bin [0],&bin [1], &bin [2], &bin [3], &bin [4], &bin [5], &bin [6], &bin [7], &bin [8]) != EOF)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			max = 0;
			for (int i = 1; i < 9; i ++)
			{
				if (bin [i] > bin [max])
					max = i;
			}
			
			if (max % 3 == 0)
			{
				sum += bin [max + 1] + bin [max + 2];
				bin [max] = bin [max + 1] = bin [max + 2] = -1;
			}
			else if (max % 3 == 1)
			{
				sum += bin [max - 1] + bin [max + 1];
				bin [max] = bin [max + 1] = bin [max - 1] = -1;
			}
			else if (max % 3 == 2)
			{
				sum += bin [max - 1] + bin [max - 2];
				bin [max] = bin [max - 1] = bin [max - 2] = -1;
			}
		}
		
		printf ("%d\n", sum);
	}
	
	return 0;
}
