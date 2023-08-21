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
/**
 * handle_octal - Handle %o format specifier for octal
 * @args: the va_list
 *
 * Return: Number of characters printed
 */
int handle_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int _stdout = 0;

	return (_stdout += _putoctal(num));
}
/**
 * handle_hex - Handle %X and %x format specifiers for hexadecimal
 * @args: the va_list
 * @uppercase: hex specifier (X for uppercase)
 * Return: Number of characters printed
 */
int handle_hex(va_list args, int uppercase)
{
	unsigned int num = va_arg(args, unsigned int);
	int _stdout = 0;

	return (_stdout += _puthex(num, uppercase));
}
