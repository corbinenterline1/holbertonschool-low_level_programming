#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_custstrdup - refined version of strdup (my old one sucked)
 * @str: input pointer to string
 * get length of string with first for
 * malloc string + 1 (for terminator)
 * all throughout, check for NULL at appropriate time
 * second for loop copies string to new cpy (copy)
 * Return: cpy
 */
char *_custstrdup(char *str)
{
	int a, b;
	char *cpy;

	a = b = 0;
	if (str == 0)
		return (NULL);
	for (; str[a] != '\0'; a++, b++)
	;
	cpy = malloc(sizeof(char) * (b + 1));
	if (cpy == NULL)
	{
		free(cpy);
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
		cpy[a] = str[a];
	cpy[a] = '\0';
	return (cpy);
}


/**
 * *new_dog - creates a new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * check if any input strings are NULL
 * get length of name (ln) and owner (lo)
 * malloc the new struct dog new_dog, check if malloc failed
 * malloc the copy of name (cpyn), check if malloc failed
 * malloc the copy of owner (cpyo), check if malloc failed
 * copy name to cpyn, add terminator. Do same for owner
 * Then, set elements of struct dog new_dog
 * Return: new_dog struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _custstrdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _custstrdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
