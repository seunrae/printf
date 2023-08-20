#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Additional arguments based on format specifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int _stdout = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (is_valid(*format))
				_stdout += handle_specifier(*format, args);
			else
				_stdout += _putchar(*format);
		}
		else
			_stdout += _putchar(*format);
		format++;
	}
	va_end(args);
	return (_stdout);
}
