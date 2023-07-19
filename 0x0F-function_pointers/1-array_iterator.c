#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter
 * @array: pointer to the array
 * @size: size of the array
 * @action: a function to be executed as a parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < size; i++)
	{
		if (!action || !array || !size)
			exit(1);

		(*action)(array[i]);
	}
}

