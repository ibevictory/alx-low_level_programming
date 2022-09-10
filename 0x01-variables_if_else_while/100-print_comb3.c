#include <stdio.h>

/**
 * main - print single digit numbers starting from number 0
 *
 * freturn: always
 */
int main(void)
{
	int i, j;

	for (j = 1; j <= 9; j++)
	{
		if (j > i)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
