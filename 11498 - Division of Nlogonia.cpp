#include <stdio.h>

int main()
{
	int K, M, N, X, Y, i;
	
	while (1)
	{
		scanf ("%d", &K);
		
		if (K == 0)
			break;
		scanf ("%d %d", &M, &N);
		
		for (i = 0; i < K; i++)
		{
			scanf ("%d %d", &X, &Y);
			
			if (X == M || Y == N)
				printf ("divisa\n");
			else if (X > M && Y > N)
				printf ("NE\n");
			else if (X > M && Y < N)
				printf ("SE\n");
			else if (X < M && Y > N)
				printf ("NO\n");
			else
				printf ("SO\n");
		}
	}
	
	return 0;
}
