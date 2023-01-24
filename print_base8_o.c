#include "main.h"

/**
 * print_base8_o - funtion to print number to base 8
 * @ap: va_list variable
 *
 * Return: count
 */
int print_base8_o(va_list ap)
{
	unsigned int digit[12];
	unsigned int i, sum_digit;
	int count = 0;
	unsigned long int num, m;

	num = (unsigned long int)va_arg(ap, unsigned int);
	sum_digit = 0;
	m = 8589934592; /* 8 ^ 11 */

	for (i = 0; i < 12; i++)
	{
		digit[i] = (unsigned int)((num / m) % 8);
		m = m / 8;
	}

	for (i = 0; i < 12; i++)
	{
		sum_digit += digit[i];
		if (sum_digit != 0 || i == 11)
		{
			_putchar(digit[i]);
			count++;
		}
	}
	return (count);
}
