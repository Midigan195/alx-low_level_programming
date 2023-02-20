#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - run program
 *
 *return test if n is posiyive
 *return text if n is negative
 *return text if n is zero
 *Return: 0 if sucessful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
