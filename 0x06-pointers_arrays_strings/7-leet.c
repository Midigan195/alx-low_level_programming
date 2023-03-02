#include"main.h"
/**
 * leet - concattenates two strings
 * @c: string 2
 * Return: value of dest
*/

char *leet(char *c)
{
	int i = 0;
	int j = 0;
	char a[5] = {'a', 'e', 'o', 't', 'l'};
	char b[5] = {'4', '3', '0', '7', '1'};

	while (*(c + i) != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (*(c + i) == a[j] || *(c + i) == (a[j] - 32))
			{
				*(c + i) = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return(c);

}
