#include "main.h"
/**
* print_int_u - function to print an unsigned integer
* @ap: va_list variable
*
* Return: count
*/

int print_int_u(va_list ap)
{
	unsigned int digit[10];
	unsigned int i, sum_digit, num, m;
	int count;

	num = va_arg(ap, unsigned int);
	count = 0;
	sum_digit = 0;

	for (i = 0; i < 10; i++)
	{ 
		digit[i] = (num / m) % 10;
		m /= 10;
	}

	for (i = 0; i < 10; i++)
	{
		sum_digit += digit[i];
		if (sum_digit != 0 || i == 9)
		{
			_putchar(digit[i]);
			count++;
		}
	}
	return (count);
}
