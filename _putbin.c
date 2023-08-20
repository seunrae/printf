#include "main.h"

/**
 * _putbin - Recursive function to print binary representation
 * @num: The number to convert and print
 *
 * Return: Number of characters printed
 */
int _putbin(unsigned int num)
{
	int count;

	if (num == 0)
	{
		return (0);
	}
	count = _putbin(num / 2);
	_putchar(num % 2 + '0');
	return (count + 1);
}
