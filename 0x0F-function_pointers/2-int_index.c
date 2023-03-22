#include"function_pointers.h"
/**
 * int_index - returns an integer
 * array - pointer to array of ints
 * size - size of array
 * cmp - comparison to use
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((cmp(array[i])) != 0)
			return (i);
	}
	return (-1);

}
