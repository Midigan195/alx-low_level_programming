#include"main.h"
/**
 * _strcpy - changes value through pointer
 * @dest: empty pointer
 * @src: pointer of string
 * Return: pointer of dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);


}
