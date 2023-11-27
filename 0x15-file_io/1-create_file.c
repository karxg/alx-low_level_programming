#include "main.h"
/**
* create_file - creates a file
*
* @filename: file source
* @text_content: file contents
*
* Return: Returns: 1 on success, -1 on failure
* if filename is NULL return -1, if text_content is NULL create an empty file
*/

int create_file(const char *filename, char *text_content)
{
	int fileDescriptor, writtenBytes = 0;

	if (!filename)
		return (-1);

	fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fileDescriptor == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[writtenBytes])
	{
		writtenBytes++;
	}

	write(fileDescriptor, text_content, writtenBytes);
	close(fileDescriptor);
	return (1);
}
