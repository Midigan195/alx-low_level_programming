#include"main.h"
/**
 * more_numbers - Checks if letter is uppercase
 * Return: 0 always sucessful
*/

void more_numbers(void)
{
	char c[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(c[1]);
			}

			_putchar(c[i % 10]);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
