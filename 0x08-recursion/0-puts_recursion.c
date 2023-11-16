include "main.h"

/**
 * Function prints ssingle character of a string
 */

void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] == "\0")
	{
		_putchar("\n");
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + i);
}
