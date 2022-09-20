#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints the reverse of a string.
 * @s: input string.
 * Return: nothing.
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
