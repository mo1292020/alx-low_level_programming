#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: array of integer parameter
 * @size: size_t parameter
 * @cmp: function pointer
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	int h;

	if (array != NULL && size > 0 && cmp != NULL)
		for (h = 0; h < size; h++)
			if (cmp(array[h]) != 0)
				return (h);
	return (-1);
}
