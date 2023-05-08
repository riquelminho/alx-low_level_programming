
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the name of the file to read
* @letters: the number of letters to read and print
*
* Return: the actual number of letters read and printed, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, count, written;
char *buf;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * (letters + 1));
if (!buf)
return (0);

count = read(fd, buf, letters);
if (count == -1)
{
free(buf);
close(fd);
return (0);
}

buf[count] = '\0';
written = write(STDOUT_FILENO, buf, count);
if (written == -1 || written != count)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (written);
}
