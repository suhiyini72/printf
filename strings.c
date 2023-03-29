#include "main.h"

/**
 * printf_string - This is the function that prints string
 * @args: arguements
 * @print: the printed characters
 * Return: printed charcaters to be returned
 */

int printf_string(va_list args, int print)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		print++;
		string++;
	}
	return (print);
}
