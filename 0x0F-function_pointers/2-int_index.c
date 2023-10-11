#include "function_pointers.h"
/**
 * int_index- function pointer that search for num
 * @array: input
 * @cmp: function pointer
 * @size: input
 * Return: void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (cmp && array && size)
	{
		int elem = 0;

		while (elem < size)
		{
			if (cmp(arr[elem]))
			{
				return (elem);
			}
			elem++;
	}
	return (-1);
	}
}

