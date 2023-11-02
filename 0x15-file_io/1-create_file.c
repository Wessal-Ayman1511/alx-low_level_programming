#include "main.h"
#include <string.h>
/**
 * create_file- function that create file
 * @filename:input
 * @text_content:input
 * Return:int
*/
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t num_bytes, length = strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (length)
		num_bytes = write(f, text_content, length);
	close(f);
	return (num_bytes == length ? 1 : -1);
}
