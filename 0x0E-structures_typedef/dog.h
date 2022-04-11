#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - a dog
 *
 * @name: dog's name
 *
 * @age: age of dog
 *
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
