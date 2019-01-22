#include <stdio.h>

int main()
{
	int l, w, h, T, i;
	
	scanf ("%d", &T);
	
	for (i = 1; i <= T; i++)
	{
		scanf ("%d %d %d", &l, &w, &h);
		
		if (l > 20 || w > 20 || h > 20)
			printf ("Case %d: bad\n", i);
		else
			printf ("Case %d: good\n", i);
	}
	
	return 0;
}
