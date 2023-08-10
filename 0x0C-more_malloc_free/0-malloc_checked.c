#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the number of memory to allocate in bytes.
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);

}
