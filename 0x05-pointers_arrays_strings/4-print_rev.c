#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; 1--)
		_putchar(s[i]);

	_putchar('\n');
}
