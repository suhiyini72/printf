#include "main.h"

/**
 * _putchar - This prints/writes character
 * @character: The character to printed
 * Return: 1, success, -1 error
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
