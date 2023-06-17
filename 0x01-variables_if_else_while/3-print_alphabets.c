#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphapet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'a';
	char ch2 = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (ch2 <= 'Z')
	{
		putchar(CH2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
