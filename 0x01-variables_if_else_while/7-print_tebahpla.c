#include <stdio.h>

/**
 * main - prints alphabet at reverse
 *
 * return: always
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
