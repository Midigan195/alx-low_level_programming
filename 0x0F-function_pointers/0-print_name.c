#include"function_pointers.h"
#include<stddef.h>
/**
 * print_name - prints name
 * @name: array of characters
 * @f: - pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
