#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define NOREAD "Error: Can't read from file %s\n"
#define NOWRITE "Error: Can't write to %s\n"
#define NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSION (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main- entnry point
 * @ac: input
 * @av: input
 * Return: 1 or 0
*/
int main(int ac, char **av)
{
	int fd1 = 0, fd2 = 0;
	ssize_t c;
	char buffer[BUFFER];

	if (ac != 3)
		dprint(STDERR_FILENO, USAGE), exit(97);
	fd1 = open(av[2], O_RDONLY);
	if (fd1 == -1)
		dprint(STDERR_FILENO, NOREAD, av[1]), exit(98);
	fd2 = open(av[2], O_RDONLY | O_TRUNC | O_CREAT, PERMISSION);
	if (fd2 == -1)
		dprint(STDERR_FILENO, NOWRITE, av[2]), exit(99);
	while ((c = read(fd1, buffer, BUFFER)) > 0)
		if (write(fd2, buffer, c) != c)
			dprint(STDERR_FILENO, NOWRITE, av[2]), exit(99);
	if (c == -1)
		dprint(STDERR_FILENO, NOREAD, av[1]), exit(98);
	fd1 = close(fd1);
	fd2 = close(fd2);
	if (fd1)
		dprint(STDERR_FILENO, NOCLOSE, fd1), exit(100);
	if (fd2)
		dprint(STDERR_FILENO, NOCLOSE, fd2), exit(100);
	return (EXIT_SUCCESS);
}
