#include "main.h"


/**
 * create_file - function that create a file and fills it
 *
 * @filename : the name of the file that is created
 *
 * @text_content : the text that the file is being filled with
 *
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}

/**
 * _strlen - function that returns the number of chars in a string
 *
 * @s: string to count
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
