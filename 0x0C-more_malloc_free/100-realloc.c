#include "main.h"
#include <stdlib.h>


/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory block to reallocate
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to the reallocated memory block or NULL if failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  char *new_ptr, *old_ptr;
  unsigned int i;

  if (new_size == 0)
  {
    free(ptr);
    return (NULL);
  }

  if (ptr == NULL)
  {
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
      return (NULL);
    return ((void *)new_ptr);
  }

  if (new_size == old_size)
    return (ptr);

  new_ptr = malloc(new_size);
  if (new_ptr == NULL)
    return (NULL);

  old_ptr = ptr;
  for (i = 0; i < old_size && i < new_size; i++)
    new_ptr[i] = old_ptr[i];

  free(ptr);

  return ((void *)new_ptr);
}
