#include "main.h"

/**
 * print_cent - function to print '%'
 * @ap: umused valis variable
 *
 * Return: 1 - number of byte printed
 */
int print_cent(va_list ap __attribute__((unused)))
{
	char percent = '%';

	_putchar(percent);

	return (1);
}
