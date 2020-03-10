#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
	int a, ln, lo;
	char *cpyn, *cpyo;

	if (name == NULL || owner == NULL)
		return (NULL);
	for (ln = 0; name[ln] != '\0'; ln++)
	;
	for (lo = 0; owner[lo] != '\0'; lo++)
	;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cpyn = malloc(sizeof(char) * (ln + 1));
	if (cpyn == NULL)
		free(new_dog);
		return (NULL);
	cpyo = malloc(sizeof(char) * (lo + 1));
	if (cpyo == NULL)
		free(cpyn);
		free(new_dog);
		return (NULL);
	for (a = 0; name[a] != '\0'; a++)
		cpyn[a] = name[a];
	cpyn[a] = '\0';
	for (a = 0; owner[a] != '\0'; a++)
		cpyo[a] = owner[a];
	cpyo[a] = '\0';
	new_dog->name = cpyn;
	new_dog->age = age;
	new_dog->owner = cpyo;
	return (new_dog);
}
