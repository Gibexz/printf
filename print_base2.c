#include "main.h"

/**
 * print_base2 - funtion to print in base2 format
 * @ap: va_list variable
 *
 * Return: count
 */
int print_base2(va_list ap)
{
	unsigned int digit[32]; /* array of numbers obtained from loop 1 */
	unsigned int i, count, sum_digit, num;
	unsigned int m = 2147483648;/* Divisor to be looped (2 ^ 31) */

	num = va_arg(ap, unsigned int);
	count = 0;
	sum_digit = 0;


	for (i = 0; i < 32; i++)/* *Loop 1* */
	{
		digit[i] = (num / m) % 2;
		m /= 2;
	}


	for (i = 0; i < 32; i++)
	{
		sum_digit = sum_digit + digit[i];
		if (sum_digit || i == 31)
		{
			_putchar(digit[i] + '0');
			count++;
		}
	}
	return (count);
}


