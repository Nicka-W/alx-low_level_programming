#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner f dog
 *
 * Description: Provides important inforamtion about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif