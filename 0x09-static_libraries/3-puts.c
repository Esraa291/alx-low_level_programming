#include "main.h"
#include<stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: the string to print
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
