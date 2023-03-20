#include<stdlib.h>
#include"dog.h"
/**
 * new_dog - pointer to a new member
 * @name: name of dog
 * @age: age of dog
 * @owner : owner of dog
 * Return: pointer to new member
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
