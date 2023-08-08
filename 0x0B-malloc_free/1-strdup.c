#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - this is a function that duplicates a string
 *
 * @str: an input8 string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*count character of string*/
	{
		i++;
	}

	return (i);
}

/**
 *_strcpy - copy arrays
 *@src: array of 
