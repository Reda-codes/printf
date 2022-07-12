#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_func - prints special characters
 * @plus: Letter after the Specifier
 * @arg: argument to be replaced with
 * Return: the number of characters printed
 */
int get_func(char plus, va_list arg)
{
	int i;

	fn functions[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	for (i = 0; functions[i].Specifier != NULL; i++)
	{
		if (functions[i].Specifier[0] == plus)
			return (functions[i].printfun(arg));
	}
	return (0);
}
