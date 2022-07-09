#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - function that function that prints anything
 * @format: character string.
 * Return: characters printed
 * Description: function that function that prints anything
 * and work same as normal printf.
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int sp = 0, num = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			num++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			num++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

		sp = get_func(format[i + 1], arg);
		if (sp == -1 || sp != 0)
			i++;
		if (sp > 0)
			num += sp;

		if (sp == 0)
		{
			_putchar('%');
			num++;
		}
	}
	va_end(arg);
	return (num);
}
