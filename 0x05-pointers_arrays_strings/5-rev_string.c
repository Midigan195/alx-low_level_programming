#include"main.h"
/**
 * rev_string - prints string in reverse
 * @s: takes pointer of character
 * Return: nothing
*/

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(s + j) != '\0')
	{
		j++;
	}
	j--;

	while (!((j - i) < 1))
	{
		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
		i++;
		j--;
	}
}
