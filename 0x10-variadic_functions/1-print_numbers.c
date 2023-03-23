#include<stdarg.h>
#include<stddef.h>
#include<stdio.h>
/**
 * print_numbers - adds all arguments together
 * @separator: pointer to charcater separator
 * @n: number of arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i = 0;
	int count = n;

	if (n == 0)
		printf("\n");

	va_start(list, n);

	for (i = 0; i < count; i++)
	{
		printf("%d", va_arg(list, int));
		if (i < (count - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
