#include"main.h"
/**
 * cap_string - concattenates two strings
 * @c: string 1
 * Return: value of dest
*/

char *cap_string(char *c)
{
	int i = 0;
	int j = 0;	
	char up[] = {32 ,9 ,10 ,44 ,59 ,46 ,34 ,35 ,63 ,40 ,41 ,123 ,125};

	while (*(c + i) != '\0')
	{
		j = 0;
		while (j < 13)
		{
			if (*(c + i) == up[j])
				if (*(c + (i + 1)) > 'a' && *(c + (i + 1)) < 'z')
					*(c + (i + 1)) = *(c + (i + 1)) - 32;
			j++;
		}
		i++;
	}

	return (c);
}
