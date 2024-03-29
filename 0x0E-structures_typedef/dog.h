#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details on a dog
 * @name: the dog's name
 * @age: the age of the dog
 * @owner: who does the dog belong to?
 *
 * Description: A structure that is used for dog details
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
void free_dog(dog_t *d);

#endif
