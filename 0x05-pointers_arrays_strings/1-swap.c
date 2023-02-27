#include"main.h"
/**
 * swap_int - changes value through pointer
 * @a: pointer of a
 * @b: pointer of b
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
       	*a = *b;
	*b = temp;       
}
