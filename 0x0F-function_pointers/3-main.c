#include "3-calc.h"
/**
 * main- entery point
 * @argc: input
 * @argv: input
 * Return: 0
*/
int main(int argc, char **argv)
{

	int (*o)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	o = get_op_func(argv[2]);
	if (!o)
		printf("Error\n"), exit(99);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", o(a, b));
	return (0);
}
