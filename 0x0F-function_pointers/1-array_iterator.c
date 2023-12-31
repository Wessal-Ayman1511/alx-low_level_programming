#include "function_pointers.h"
/**
 * array_iterator- function pointer executes a function given as a parameter
 * @size: input
 * @action: input
 * @array: input
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		for (; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
