#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	int count = 0;
	
	while (1)
	{
		scanf ("%s", s);
		
		if (s[0] == '*')
			break;
			
		if (s[0] == 'U')
			printf ("Case %d: Hajj-e-Asghar\n", ++count);
		else
			printf ("Case %d: Hajj-e-Akbar\n", ++count);
	}
	
	return 0;
}
