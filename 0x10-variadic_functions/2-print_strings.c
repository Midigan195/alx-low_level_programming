#include<stdarg.h>
#include<stddef.h>
#include<stdio.h>
/**
 * print_strings - prints each string
 * @separator: pointer to charcater separator
 * @n: number of arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i = 0;
	int count = n;
	char *text;

	if (n == 0)
		printf("\n");

	va_start(list, n);

	for (i = 0; i < count; i++)
	{
		text = va_arg(list, char*);
		if (text != NULL)
			printf("%s", text);
		else
			printf("(nil)");
		if (i < (count - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
