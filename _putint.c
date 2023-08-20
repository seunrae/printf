#include <stdio.h>
#include "main.h"
/**
 * _putint - prints an integer
 * @num: input parameter
 * Return: integer
 */
int _putint(int num)
{
	int print_out = 0;

	if (num < 0)
	{
		print_out += _putchar('-');
		num *= -1;
	}
	if (num / 10)
	{
		print_out += _putint(num / 10);
	}
	print_out += _putchar((num % 10) + '0');
	return (print_out);
}
