#include <stddef.h>

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array.
 *
 * @array: array of integer parameter
 * @size: size_t parameter
 * @action: function pointer
 *
 * Return: nothing
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (array != NULL && size > 0 && action != NULL)
		for (h = 0; h < size; h++)
			action(array[h]);
}
