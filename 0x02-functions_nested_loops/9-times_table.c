#include"main.h"

/**
 * times_table - prints alphabet from a
 *
 * Return: 0 if sucessful
*/
void times_table(void)
{
	char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i = 0;
	int j = 0;
	int val;

	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			val = i * j;
			_putchar(',');
			if ((val / 10) >= 1)				
			{
				_putchar(num[(val - (val % 10)) / 10]);
				_putchar(num[val % 10]);
				_putchar(' ');
			}
			else
			{
				_putchar(num[val]);
				_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
