#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * _strlen - returns the length of a string
 * @s: string to be determined
 * Return: length of string
 */
int _strlen(char *s)
{
	int b;

	for (b = 0; *s != '\0'; s++)
	++b;
	return (b);
}
/**
 * create_file - function that creates a file.
 * @filename: filename
 * @text_content: contents
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, flag;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
	}
	if (!text_content)
		return (1);
	len = _strlen(text_content);
	flag = write(fd, text_content, len);
	if (flag == -1)
		return (-1);
	return (1);
}
