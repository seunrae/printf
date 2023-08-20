#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: input parameter
 * Return: printed string
 */
int _puts(char *str)
{
	int print_out = 0;

	while (*str)
	{
		print_out += _putchar(*str);
		str++;
	}
	return (print_out);
}
