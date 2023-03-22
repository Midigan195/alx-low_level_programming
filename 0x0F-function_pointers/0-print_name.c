#include"function_pointers.h"
/**
 * print_name - prints name
 * name - array of characters
 * f - pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
