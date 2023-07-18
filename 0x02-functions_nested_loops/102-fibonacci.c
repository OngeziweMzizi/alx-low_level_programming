#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * d
 * fibonacci number to be printed
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int a, b, fb;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	for (i = 1; i <= 48; i++)
	{
		fb = (a + b);
		printf("%ld, ", fb);
		a = b;
		b = fb;
	}
	printf("\n");
return (0);
}
