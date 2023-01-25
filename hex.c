#include "main.h"

/**
 * hex - function to print a number in base 16;
 * @ap: va_list varibale
 *
 * Return: count
 */
int hex(int num)
{
	int digit[8];
	int count = 0;
	unsigned int i, sum_digit, m;

	sum_digit = 0;
	m = 268435456; /* (16 ^ 7) */

	for (i = 0; i < 8; i++)
	{
		digit[i] = (num / m) % 16;
		m = m / 16;
	}

	for (i = 0; i < 8; i++)
	{
		sum_digit += digit[i];
		if (sum_digit || i == 7)
		{
			if (digit[i] == 10)
				_putchar('A');
			if (digit[i] == 11)
				_putchar('B');
			if (digit[i] == 12)
				_putchar('C');
			if (digit[i] == 13)
				_putchar('D');
			if (digit[i] == 14)
				_putchar('E');
			if (digit[i] == 15)
				_putchar('F');
			if (digit[i] < 10)
				_putchar(digit[i] + '0');
			count++;
		}
	}
	return (count);
}
