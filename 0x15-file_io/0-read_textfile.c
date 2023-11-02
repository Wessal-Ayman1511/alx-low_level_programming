#include "main.h"
/**
 * read_textfile- function that read text file
 * @filename: input
 * @letters: input
 * Return: int
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t num_bytes;
	char buffer[BUFFER * 8];

	if (!letters || !filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	num_bytes = read(f, &buffer[0], letters);
	num_bytes = write(STDOUT_FILENO, &buffer[0], num_bytes);
	close(f);
	return (num_bytes);


}
