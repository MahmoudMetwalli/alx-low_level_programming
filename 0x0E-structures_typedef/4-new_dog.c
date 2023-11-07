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
	char *n, *o;
	int a, b, i, j;

	d = malloc(sizeof(dog_t));
	d->name = name;
	d->age = age;
	d->owner = owner;
	a = strnl(name);
	b = strnl(owner);
	n = malloc(sizeof(char) * a);
	o = malloc(sizeof(char) * b);
	if (n == NULL || o == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < a; i++)
	{
		n[i] = name[i];
	}
	for (j = 0; j < b; j++)
	{
		o[j] = owner[j];
	}
	return (d);
}
