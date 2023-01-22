#include "main.h"

/**
 *
 *
 */
typedef struct print
{
	char *t;
	int (*funct)(va_list);
}print_struct;

/**
 *
 *
 */
int (*check_specifier(char *format))(valist);
{
	int i;

	print_struct p[4] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_cent},
		{NULL, NULL}
	};

	for (i = 0; i < 4; i++)
	{
		if (*p[i].t) == *format)
			break;
	}
	return (p[i].funct);
}

/**
 *
 *
 */
int _printf(const char *format, ...)
{
	int i, count = 0;/* i for looping and count for the number of
			    characters printed */
	va_list ap;
	//void (*valist_funct_ptr)(va_list) = &check_specifier;

	va_start (ap, format);

	if (format == NULL)/* check if format is a NULL pointer */
		return (-1);

	while (format [i])
	{
		for (i = 0; format[i] != '%'; i++)
		{
			_putchar(format[i]);
			count = count + 1;
		}

		if (format[i] == '%')
		{
			valist_funct_ptr(format[i + 1]);
		}
	}
	va_end(ap);
	return (count);
}
