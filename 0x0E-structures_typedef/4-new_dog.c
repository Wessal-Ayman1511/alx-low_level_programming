#include "dog.h"
#include <stdlib.h>
/**
 * _len- function calc length of str
 * @s: input
 * Return: length
*/
int _len(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
/**
 * _copy - function that copy string
 * @s1:input
 * @s2: input
 * Return: @s1
*/
char *_copy(char *s1, char *s2)
{
	int i = 0;

	for (; s2[i] ; i++)
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}
/**
 * *new_dog- function that creates a new dog.
 * @name: input
 * @age: input
 * @owner: input
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (_len(name) + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (_len(owner) + 1));
	if ((*d).owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _copy(d->name, name);
	d->age = age;
	d->owner = _copy(d->owner, owner);
	return (d);
}
