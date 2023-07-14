#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints all possible combinations of three digit numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48, j = 48, k = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (i < j && j < k && i < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
