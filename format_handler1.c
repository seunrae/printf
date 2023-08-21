#include <stdarg.h>
#include "main.h"
/**
 * handle_binary - Handle %b format specifier (binary)
 * @args: The va_list
 *
 * Return: Number of characters printed
 */
int handle_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int _stdout = 0;

	if (num == 0)
	{
		_stdout += _putchar('0');
	}
	else
	{
		_stdout += _putbin(num);
	}
	return (_stdout);
}
/**
 * handle_unsignedint - Handle %u format specifier for unsigned int
 * @args: the va_list
 *
 * Return: Number of characters printed
 */
int handle_unsignedint(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int _stdout = 0;

	return (_stdout += _putunsignedint(num));
}
