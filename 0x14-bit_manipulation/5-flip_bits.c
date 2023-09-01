#include <stdio.h>
#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: returns the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int current;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = xor >> i;
		if (current & 1)
			c++;
	}

	return (c);
}
