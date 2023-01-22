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
int (*check_specifier(const char *format))(va_list)
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
		if ((*p[i].t) == *format)
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
	int return_count = 0; /* Value returned when check_specifier is call */
	va_list ap;
	int (*valist_funct_ptr)(va_list); /* funtion pointer */

	va_start (ap, format);

	if (format == NULL)/* check if format is a NULL pointer */
		return (-1);

	while (format [i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count = count + 1;
			i++;
			continue;
		}

		if (format[i] == '%')
		{
			/* funtion ptr assignment to checkspecifier */
			valist_funct_ptr = check_specifier(&format[i + 1]);
			if (valist_funct_ptr != NULL)
			{
				return_count = valist_funct_ptr(ap);
				count = count + return_count;
				i = i + 2; /* New index point i.e after the specifier characters */
				continue;
			}
			/* what happens if the checkspecifier returns NULL */
			if (valist_funct_ptr == NULL) 
				break;

			/* continue printing after with the new index is [i + 1] */
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
