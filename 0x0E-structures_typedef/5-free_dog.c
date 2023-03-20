#include<stdlib.h>
#include"dog.h"
/**
 * free_dog - frees all items in struvture
 * @d: pointer to member
*/

void free_dog(dog_t *d)
{
	free(d);
}
