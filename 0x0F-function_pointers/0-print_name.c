#include "function_pointers.h"
/**
 * print_name- function pointer that print name
 * @name: input
 * @f: function pointer
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
