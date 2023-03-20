#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _cp_string - function that copy two string
 *
 * @s1 :string parameter
 * @s2: string parameter
 *
 * Return :nothing.
 **/

char *_cp_string(char *s1, char *s2)
{
	int h, size;

	size = strlen(s1);

	for (h = 0; h < size; h++)
		s2[h] = s1[h];

	s2[h] = '\0';

	return (s2);

}

/**
 * new_dog -  function that creates a new dog.
 *
 * @name: string parameter.
 * @age: float parameter.
 * @owner: string parameter.
 *
 * Return: nothing.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || !owner || age < 0)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = _cp_string(dog->name, name);
	dog->age = age;
	dog->owner = _cp_string(dog->owner, owner);

	return (dog);
}
