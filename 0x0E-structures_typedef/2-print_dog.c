#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 * print_dog - prints member in struct
 * @d: pointer to member
*/

void print_dog(struct dog *d)
{
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	if (d != NULL)
	{
		if (name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s", name);
		printf("\n");
		if (age <= 0)
			printf("Age: (nil)");
		else
			printf("Age: %f", age);
		printf("\n");
		if (owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s", owner);
		printf("\n");
	}



}
