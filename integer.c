#include "main.h"

/**
 * printf_integer - This the function to prints integer
 * @args: number arguements
 * @print: the printed characters
 * Return: printed charcaters to be returned
 */

int printf_integer(va_list args, int print)
{
	int num = va_arg(args, int);
	int digits = 0;
	int temp = num;
	int digit;

	if (num < 0)
	{
		print += _putchar('-');
		num = -num;

		temp = num;
	}

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	while (digits > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			pow10 *= 10;
		}
		digit = num / pow10;
		print += _putchar(digit + '0');
		num -= digit * pow10;
		digits--;
	}
	return (print);
}
