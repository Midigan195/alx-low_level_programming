#ifndef dog_h
#define dog_h
/**
 * struct dog - contains details of each dog
 * @name: dogs name
 * @age: dogs age
 * @owner: name of dogs owner
 * Description: holds the name ange and name of dog's owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* define dog_h */
