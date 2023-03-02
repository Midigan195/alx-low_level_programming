#include"main.h"
/**
 * reverse_array - concattenates two strings
 * @a: string 1
 * @n: string 2
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp = 0;

	while (j > i)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;

		i++;
		j--;
	}
}
