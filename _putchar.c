#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: char input
 * Return: 0 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
