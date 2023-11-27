#include "main.h"
/**
* append_text_to_file - appends text at the end of a file.
*
* @filename: file source
* @text_content: file contents
*
* Return: 1 on success and -1 on failure, If filename is NULL return -1
* If text_content is NULL, do not add anything to the file.
* Return 1 if the file exists and -1 if the file does not exist
* or if you do not have the required permissions to write the file
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor, writtenBytes = 0;

	if (!filename)
	{
		return (-1);
	}

	fileDescriptor = open(filename, O_WRONLY | O_APPEND);

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
