#include <main.h>

/**
 **_memset - fills memory with the constant byte.
 * @s: pointer to put the constant.
 * @b: constant.
 * @n: max bytes to use.
 * Return: pointer s.
*/

char *_memset(char *s, char b, unsigned in n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
