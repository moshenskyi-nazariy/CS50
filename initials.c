#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
	string n=GetString();

	if (n != NULL)
	{
		for (int i=0, m=strlen(n); i<m; i++)
			{
				if(n[i]!=' ' && i==0)
					printf("%c", toupper(n[i]));

				else if ((n[i-1] == ' ') && ((n[i] >= 'a' && n[i] <= 'z') || (n[i] >= 'A' && n[i] <= 'Z'))) 
				{
					printf("%c", toupper(n[i]));
				}
			}
	}

	printf("\n");
	
	return 0;
}
