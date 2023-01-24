#include "main.h"

/**
 * print_base8_o - funtion to print number to base 8
 * @ap: va_list variable
 *
 * Return: Count
 */
int print_base8_o(va_list ap)
{
	unsigned int digit[12];
	unsigned int i, sum_digit;
	int count = 0;
	unsigned int num, m;

	num = va_arg(ap, unsigned int);
	sum_digit = 0;
	m = 1073741824; /* 8 ^ 10 */

	for (i = 0; i < 11; i++)
	{
		digit[i] = (num / m) % 8;
		m = m / 8;
	}

	for (i = 0; i < 11; i++)
	{
		sum_digit += digit[i];
		if (sum_digit || i == 11)
		{
			_putchar(digit[i]);
			count++;
		}
	}
	return (count);
}
