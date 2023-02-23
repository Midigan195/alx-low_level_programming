#include<stdio.h>
/**
 * print_numbers - Checks if letter is uppercase
 * Return: 0 always sucessful
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		i++;
	}
	putchar('\n');
	
	return (0);
}
