#include "main.h"

/**
 *
 *
 */
int print_cent(va_list ap)
{
	char c;

	c = (char)va_arg(ap, int);
	_putchar(c);

	return (1);
}
