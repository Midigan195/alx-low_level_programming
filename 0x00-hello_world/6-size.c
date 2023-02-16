#include <stdio.h>
/**
 * main - Entry point
 * text - declare array
 *
 * puts - prints text to output
 * Return: Always 0 (Success)
 */
int main(void)
{
	char char_ = 'R';
	int int_ = 42;
	long int longint_ = 45672354;
	long long int longlong_ = 8746133;
	float float_ = 0.56;
	int char_size = sizeof(char_);
	int int_size = sizeof(int_);
	int longint_size = sizeof(longint_);
	int longlong_size = sizeof(longlong_);
	int float_size = sizeof(float_);

	printf("Size of a char: %d byte(s)\n", char_size);
	printf("Size of an int: %d byte(s)\n", int_size);
	printf("Size of a long int: %d byte(s)\n", longint_size);
	printf("Size of a long long int: %d byte(s)\n", longlong_size);
	printf("Size of a float: %d byte(s)\n", float_size);
	return (0);
}
