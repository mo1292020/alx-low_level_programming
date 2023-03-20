#ifndef DOG_H
#define DOG_H

typedef struct dog dog;

/**
 * struct dog - dog structure
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: dog owner
 *
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* _OBJECT_LIKE_MACRO_H */
