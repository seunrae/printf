#include <stdio.h>
#include "main.h"
/**
 * putunsigned_recursive - recursice function that prints an unsigned number
 * @num: an unsigned integer
 * @_stdout: number of characters
 * Return: total number of characters
 */
int putunsigned_recursive(unsigned int num, int _stdout)
{
	if (num == 0)
	{
		return (_stdout + 1);
	}

	_stdout = putunsigned_recursive(num / 10, _stdout);
	_putchar(num % 10 + '0');
	return (_stdout + 1);
}
/**
 * _putunsignedint - prints an unsigned number
 * @num: an unsigned integer
 * Return: recursive function to print the number
 * of characters
 */
int _putunsignedint(unsigned int num)
{
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	return (putunsigned_recursive(num, 0));
}
