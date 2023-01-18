#ifndef _DOG_
#define _DOG_

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
