#include "3-calc.h"
/**
 * get_op_func- function that return rigth op
 * @s: input
 * Return: int
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j = 0;

	while (j < 5)
	{
		if (s && s[0] == ops[j].op[0] && !s[1])
			return (ops[j].f);
		j++;
	}
	return (NULL);
}
