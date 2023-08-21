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
int _putunsignedint(unsigned int num);
int putunsigned_recursive(unsigned int num, int _stdout);
int handle_unsignedint(va_list args);
int _putoctal(unsigned int num);
int putoctal_recursive(unsigned int num, int _stdout);
int handle_octal(va_list args);
#endif
