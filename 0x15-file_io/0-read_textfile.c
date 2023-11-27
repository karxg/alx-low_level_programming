#include "main.h"
/**
* read_textfile -  reads a text file and prints it to
* the POSIX standard output.
*
* @filename: file source
* @letters: letters to read
*
* Return: the actual number of letters it could read and print
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor, bytesReaded;
	char *buffer = malloc(sizeof(char *) * letters);

	if (!buffer)
		return (0);

	if (!filename)
		return (0);

	fileDescriptor = open(filename, O_RDONLY, 0600);
	if (fileDescriptor == -1)
		return (0);

	bytesReaded = read(fileDescriptor, buffer, letters);
	write(STDOUT_FILENO, buffer, bytesReaded);

	free(buffer);

	close(fileDescriptor);
	return (bytesReaded);
}


