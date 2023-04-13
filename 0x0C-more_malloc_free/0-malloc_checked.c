#include "mainn.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Allocates memory
  * @b: the size to allocate
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int b)
{
	void *m;

	p = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
