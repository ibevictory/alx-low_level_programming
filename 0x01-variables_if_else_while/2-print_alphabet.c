#include <stdio.h>
/**
 * main - lowercase alphabets
 *
 * return: always
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
