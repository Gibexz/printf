#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/**
 * struct print - created stuct troe print_struct
 * @t: pointer to character speccifer
 * @funct: function pointer to check_spec code for the
 * respective character
 */
typedef struct print
{
	char *t;
	int (*funct)(va_list);
} print_struct;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list ap);
int print_s(va_list ap);
int print_cent(va_list ap);
int print_int(va_list ap);
int print_deci(va_list ap);
int print_base2(va_list ap);
int print_base8_o(va_list ap);
int print_base10_u(va_list ap);
int print_base16_x(va_list ap);
int print_base16_X(va_list ap);
int print_int_u(va_list ap);


#endif
