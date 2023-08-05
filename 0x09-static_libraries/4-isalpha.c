#include "main.h"
/**
 *_isalpha - checks if a character is alphabet
 *@c: input to be verified
 * Return: 1 if c is a letter, upper or lower
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
