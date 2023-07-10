#include "main.h"

/**
 * _strlen - returns the lenght of a sttring
 * @s: the string which will be checked
 *
 * Return: integer lenght of string
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text ot a file
 * @filename: name of created file
 * @text_content: text will be writen
 *
 * Return: 1 on success and 0 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
