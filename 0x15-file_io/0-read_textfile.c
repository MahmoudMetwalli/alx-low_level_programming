#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: num of bytes to be read and printed to stdout.
 * Return: num of bytes processed
 */
size_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, num1, num2;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = (char *)malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	if (!filename)
		return (0);
	num1 = read(fd, buff, letters);
	if (num1 == -1)
		return (0);
	num2 = write(STDOUT_FILENO, buff, num1);
	if (num2 != num1)
		return (0);
	close(fd);
	return (num2);
}
