#include "main.h"

/**
 * _printf - Already set printf function prototype
 * @format:format specifier
 * Return: strings that has been formatted
 */

int _printf(const char *format, ...)
{
	int print = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			print = selector(format, args, print);
			format++;
		}
		else
		{
			_putchar(*format);
			print++;
			format++;
		}
	}
	va_end(args);
	return (print);
}
