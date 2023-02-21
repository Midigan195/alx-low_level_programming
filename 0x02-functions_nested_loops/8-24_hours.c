#include"main.h"

/**
 * jack_bauer - prints every minute of a day
 *
 * Return: 0 if sucessful
*/
void jack_bauer(void)
{
	char hour_1[] = {'0', '1', '2'};
	char hour_2[] = {'0', '1', '2', '3'};
	char min_1[] = {'0', '1', '2', '3', '4', '5'};
	char min_2[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	while (i <= 2)
	{
		j = 0;
		while (j <= 3)
		{
			k = 0;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					_putchar(hour_1[i]);
					_putchar(hour_2[j]);
					_putchar(':');
					_putchar(min_1[k]);
					_putchar(min_2[l]);
					_putchar('\n');

					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}

}
