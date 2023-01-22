#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list ap);
int print_s(va_list ap);
int print_cent(va_list ap);

#endif
