#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int is_valid(char c);
int handle_specifier(char specifier, va_list args);
int _putint(int num);
int handle_binary(va_list args);
int _putbin(unsigned int num);
#endif
