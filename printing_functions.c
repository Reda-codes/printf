#include "main.h"
#include <stdio.h>
#include <unistd.h>


/**
 * print_char - function that prints a character
 * @arg: char input
 * Return: 1 on success and -1 if errore.
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_string - prints a string.
 * @arg: string input
 * Return: number of character printed
 */

int print_string(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == (char *)0)
		str = "(null)";
	else if (*str == '\0')
		return (-1);

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_int - prints an integer.
 * @arg: int input
 * Return: return program's execution status
 */
int print_int(va_list arg)
{
	int num = va_arg(arg, int);
	unsigned int d = 1, i, r, Printed = 0;


	if (num < 0)
	{
		_putchar('-');
		Printed++;
		num *= -1;
	}

	for (i = 0; num / d > 9; i++, d *= 10)
	;

	for (; d >= 1; num %= d, d /= 10, Printed++)
	{
		r = num / d;
		_putchar('0' + r);
	}
	return (Printed);
}
