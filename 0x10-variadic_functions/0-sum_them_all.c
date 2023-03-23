#include<stdarg.h>
/**
 * sum_them_all - adds all arguments together
 * @n: number of arguments
 * Return: summ of all function's parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i = 0;
	int sum = 0;
	int count = n;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < count; i++)
		sum += va_arg(list, int);

	return (sum);
}
