#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _realloc - reallocates a memory block using malloc and free.
  * @ptr: pointer to the memory previously allocated with a
  * call to ``` malloc : malloc(old_size) ```.
  * @old_size: size in bytes allocated for ptr.
  * @new_size: size in bytes of new memory block.
  *
  * Return: pointer to new mem block, NULL or ptr.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == 0)
			return (0);
		free(ptr);
		return (ptr2);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == 0)
		return (0);
	_memcpy(ptr2, ptr, old_size);
	free(ptr);
	return (ptr2);
}
