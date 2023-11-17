#include "main.h"

/**
 * _prints layers
 */

void _print_rev_recursion(char *s)
{
	unsigned int i;

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	_putchar(s[i]);
	_print_rev_recursion(s + i + 1);
	i++;
}
