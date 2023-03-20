#ifndef DOG_H
#define DOG_H

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

/**
 * dog_t -Typedef for struct dog
*/
typedef struct dog dog_t;

#endif /* _OBJECT_LIKE_MACRO_H */
