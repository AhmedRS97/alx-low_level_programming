#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 * @name: First member
 * @owner: Second member
 * @age: Third member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
