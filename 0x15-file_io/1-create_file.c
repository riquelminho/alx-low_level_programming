
#include "main.h"

/**
* create_file - creates a file and writes text to it
* @filename: the name of the file to create
* @text_content: a NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, bytes_written, i;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content)
{
for (i = 0; text_content[i]; i++)
;
bytes_written = write(fd, text_content, i);
if (bytes_written == -1 || bytes_written != i)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
