#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: member
 * @age: member
 * @owner: member
 *
 * Discription:Poppy details
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
