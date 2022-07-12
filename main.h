#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int get_func(char plus, va_list arg);
int print_int(va_list arg);

/**
 * struct fn - printing functions structure
 * @Specifier: The Specifier
 * @printfun: function to print
 */
typedef struct fn
{
char *Specifier;
int (*printfun)(va_list);
} fn;

#endif
