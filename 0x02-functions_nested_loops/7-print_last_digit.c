#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number whose last digit is to be printed
 *
 * Return: The value of the last digit
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	n = -n;

	last_digit = n % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int r;

	r = print_last_digit(98);
	_putchar('\n');
	return (0);
}
