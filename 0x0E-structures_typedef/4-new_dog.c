#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - a function that gets a length of string
 *
 * @str: the string to get the length
 *
 * Return: length of @str
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}


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

	size = _strlen(s1);

	for (h = 0; h < size; h++)
		s2[h] = s1[h];

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

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _cp_string(name, dog->name);
	dog->age = age;
	dog->owner = _cp_string(owner, dog->owner);

	return (dog);
}
