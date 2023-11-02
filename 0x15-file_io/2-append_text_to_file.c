#include "main.h"
/**
 * append_text_to_file- function that append
 * @filename: input
 * @text_content: input
 * Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t num_bytes = 0, length = strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (length)
		num_bytes = write(f, text_content, length);
	close(f);
	return (num_bytes == length ? 1 : -1);
}
