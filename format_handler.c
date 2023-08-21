#include <stdarg.h>
#include "main.h"

/**
 * handle_char - Handle %c specifier
 * @args: the va_list
 * Return: Number of characters printed
 */
int handle_char(va_list args)
{
	int value = va_arg(args, int);

	return (_putchar(value));
}
/**
 * handle_string - handle %s specifier
 * @args: the va_list
 * Return: Number of charcters printed
 */
int handle_string(va_list args)
{
	char *str = va_arg(args, char*);

	return (_puts(str));
}
/**
 * handle_int - handle %d and %i specifiers
 * @args: inpur parameter
 * Return: Number of characters printed
 */
int handle_int(va_list args)
{
	int num = va_arg(args, int);

	return (_putint(num));
}
/**
 * is_valid - check if a character is a valid format specifier
 * @c: character to check
 * Return: 1 if valid 0 if otherwise.
 */
int is_valid(char c)
{
	if (c == 'c' || c == 's' || c == '%' || c == 'b'
			|| c == 'd' || c == 'i' || c == 'u')
		return (1);
	return (0);
}
/**
 * handle_specifier - Handle the provided format specifier
 * @specifier: The format specifier character
 * @args: The va_list
 * Return: Number of characters printed
 */
int handle_specifier(char specifier, va_list args)
{
	int _stdout = 0;

	if (specifier == 'c')
		_stdout += handle_char(args);
	else if (specifier == 's')
		_stdout += handle_string(args);
	else if (specifier == '%')
		_stdout += _putchar('%');
	else if (specifier == 'd' || specifier == 'i')
		_stdout += handle_int(args);
	else if (specifier == 'b')
		_stdout += handle_binary(args);
	else if (specifier == 'u')
		_stdout += handle_unsignedint(args);
	else
		return (-1);
	return (_stdout);
}

