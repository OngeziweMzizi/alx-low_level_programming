#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q')
			continue;
		if (alpha == 'e')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
