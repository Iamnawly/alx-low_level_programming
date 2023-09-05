#include "main.h"

/**
 * This function reads a text file and prints a specified number of letters from it.
 * @param filename: The name of the file to read.
 * @param letters: The number of letters to print.
 * written by apete
 * @return: The number of letters successfully printed. If the function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    /*printf*/
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
