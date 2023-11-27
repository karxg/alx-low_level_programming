#include "main.h"
/**
 * not_close - prints an error.
 * @fd: value to print.
 */

void not_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
	exit(100);
}

/**
 * main - copy a file into another
 * @argc: size
 * @argv: character.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	copyFile(argv[1], argv[2]);
	return (0);
}

/**
 * copyFile - copy a file
 *
 * @source: file to copy
 * @dest: file to copy to
 */

void copyFile(char *source, char *dest)
{
	int sFile, dFile, rBytes, wBytes;
	char buffer[1024];

	sFile = open(source, O_RDONLY);
	if (sFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}
	dFile = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	rBytes = read(sFile, buffer, 1024);
	if (rBytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}
	while (rBytes != 0)
	{
		wBytes = write(dFile, buffer, rBytes);
		if (wBytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", dest);
			exit(99);
		}
		rBytes = read(sFile, buffer, 1024);
		if (rBytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
			exit(98);
		}
	}
	if (close(dFile) == -1)
	not_close(sFile);
	if (close(sFile) == -1)
	not_close(dFile);
}

