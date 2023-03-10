#include "main.h"

/**
 * 
 *
 *
 */
int print_str_S(va_list ap)
{
	int i, count = 0;
	char *string;

	string = va_arg(ap, char *);
	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i]; i++)
	{
		if (string[i] < 32 || string[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += hex_print(string[i]);
		}
		else
		{
			_putchar(string[i]);
			count++;
		}
	}
	return (count);

}
