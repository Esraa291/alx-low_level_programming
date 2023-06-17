#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print all alphapet letters
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putcher(ch);
		ch++;
	}
	putcher('\n');
	return (0);
}
