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
	char c;
	int t;

	string = va_arg(ap, char *);
	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] < 32 || string[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			char c = string[i];
			int t = (int) c;

			count += print_hex_x(t);
		}
		else
		{
			_putchar(string[i]);
			count++;
		}
	}
	return (count);

}
