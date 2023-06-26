#include<stdio.h>
#include<stdarg.h>
#include<stddef.h>
/**
 * print_all - prints any number of arguments of and data type
 * @format: pointer to a list of data types of each argument
*/
void print_all(const char *format, ...)
{
	unsigned int j = 0;
	char *string = NULL;
	va_list ptr;

	va_start(ptr, format);

	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", (va_arg(ptr, int)));
				break;
			case 'i':
				printf("%i", (va_arg(ptr, int)));
				break;
			case 'f':
				printf("%f", (va_arg(ptr, double)));
				break;
			case 's':
				string = va_arg(ptr, char*);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			default:
				break;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 'f' || format[j] == 's') && (format[j + 1] != '\0'))
			printf(",");
		j++;
	}
	printf("\n");

	va_end(ptr);
}
