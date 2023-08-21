#include <stdio.h>
#include "main.h"
/**
 * puthex_recursive - recursive function that converts and integer to
 * hex and prints it
 * @num: integer
 * @_stdout: number of character
 * @uppercase: hex identifier (X for uppercase)
 *
 * Return: number of characters printed
 */
int puthex_recursive(unsigned int num, int _stdout, int uppercase)
{
	int remainder;

	if (num == 0)
	{
		return (_stdout + 1);
	}

	remainder = num % 16;
	_stdout = puthex_recursive(num / 16, _stdout, uppercase);
	if (uppercase == 1)
		_putchar((remainder < 10) ? (remainder + '0') : ((remainder - 10) + 'A'));
	else
		_putchar((remainder < 10) ? (remainder + '0') : ((remainder - 10) + 'a'));
	return (_stdout + 1);
}
/**
 * _puthex - prints hex values
 * @num: integer
 * @uppercase: hex identifier (X for uppercase)
 *
 * Return: number of characters printed
 */
int _puthex(unsigned int num, int uppercase)
{
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	return (puthex_recursive(num, 0, uppercase));
}
