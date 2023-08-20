#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar -  prints a single character to the standard output
 * @c: input parameter
 * Return: character
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

