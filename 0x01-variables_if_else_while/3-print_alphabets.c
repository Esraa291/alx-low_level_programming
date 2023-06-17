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
	char ch = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (ch <= 'Z')
	{
		putchar(CH);
		ch++;
	}
	putchar('\n');
	return (0);
}
