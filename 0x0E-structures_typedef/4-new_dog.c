#include "dog.h"
#include <stdlib.h>
/**
 * strnl - calculate size of string
 * @s: string
 * Return: length of string
*/
unsigned int strnl(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * new_dog -  function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int a, b, i, j;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	a = strnl(name);
	d->name = malloc(sizeof(char) * (a + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= a; i++)
	{
		d->name[i] = name[i];
	}
	d->age = age;
	b = strnl(owner);
	d->owner = malloc(sizeof(char) * (b + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (j = 0; j <= b; j++)
	{
		d->owner[j] = owner[j];
	}
	return (d);
}
