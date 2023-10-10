#include "dog.h"
/**
 * *new_dog- function that creates a new dog.
 * @name: input
 * @age: input
 * @owner: input
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t s;

	if (s == NULL)
	{
		return (NULL);
	}
	s.name = name;
	s.age = age;
	s.owner = owner;
	return (s);
}
