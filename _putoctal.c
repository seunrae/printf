#include <stdio.h>
#include "main.h"
/**
 * putoctal_recursive - recursive function that prints numbers in octal
 * @num: integer
 * @_stdout: Number of characters
 *
 * Return: number of characters
 */
int putoctal_recursive(unsigned int num, int _stdout)
{
	if (num == 0)
	{
		return (_stdout + 1);
	}

	_stdout = putoctal_recursive(num / 8, _stdout);
	_putchar(num % 8 + '0');
	return (_stdout + 1);
}
/**
 * _putoctal - function that converts integers to octal and prints it
 * @num: integer
 * Return: number of characters
 */
int _putoctal(unsigned int num)
{
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	return (putoctal_recursive(num, 0));
}
