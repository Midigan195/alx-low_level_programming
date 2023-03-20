#include<stdio.h>
#include"dog.h"
/**
 * init_dog - adds new member
 * @d: pointer to member
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
