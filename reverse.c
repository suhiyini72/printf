#include "main.h"

/**
 * printf_reverse - This prints a binary number
 * @args: arguements
 * @print: the printed characters to be printed
 * Return: printed charcaters
 */

int printf_reverse(va_list args, int print)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		print++;
	}

	return (print);
}
