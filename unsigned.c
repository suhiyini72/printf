#include "main.h"

/**
 * printf_unsigned - This is the function to print a binary number
 * @num: number of arguements
 * @print: the printed characters
 * Return: The returned printed charcaters 
 */

int printf_unsigned(unsigned int num, int print)
{
	int digits = 0;
	unsigned int temp = num;

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	if (num == 0)
	{
		_putchar('0');
		print++;
	}
	else
	{
		char unsigned_str[11];
		int i = 0;

		while (num != 0)
		{
			unsigned_str[i] = (num % 10) + '0';
			num /= 10;
			i++;
		}
		for (i = digits - 1; i >= 0; i--)
		{
			_putchar(unsigned_str[i]);
			print++;
		}
	}
	return (print);
}
