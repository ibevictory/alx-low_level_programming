#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints a string
 * @str: string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int m, i;

	for (m = 0; str[m] != '\0'; m++)
	;
	if (m % 2 == 0)
	{
		for (i = m / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((m - 1) / 2) + 1; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
