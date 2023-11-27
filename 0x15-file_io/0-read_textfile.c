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
	int fd = open(filename, O_RDONLY);
	char *buff;
	size_t num_of_bytes;

	buff = (char *)malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	if (!filename)
		return (0);
	if (fd == -1)
		return (0);
	num_of_bytes = read(fd, buff, letters);
	if (num_of_bytes == 0)
		return (0);
	num_of_bytes = write(1, buff, letters);
	if (num_of_bytes != letters)
		return (0);
	close(fd);
	return (num_of_bytes);
}
