#include "main.h"

/**
 * selector - This selects the appropriate specifiers
 * @args: number of arguements
 * @print: the printed characters
 * @format: the format specifier of the function
 * Return: printed charcaters
 */

int selector(const char *format, va_list args, int print)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			print = printf_integer(args, print);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			print++;
			break;
		case 's':
			print = printf_string(args, print);
			break;
		case '%':
			_putchar('%');
			print++;
			break;
		case 'b':
			print = printf_binary(va_arg(args, unsigned int), print);
			break;
		case 'x':
		case 'X':
			print = _x(va_arg(args, unsigned int), print, (*format == 'X') ? 1 : 0);
			break;
		case 'u':
			print = printf_unsigned(va_arg(args, unsigned int), print);
			break;
		case 'o':
			print = printf_octal(va_arg(args, unsigned int), print);
			break;
		default:
			break;
	}
	return (print);
}
