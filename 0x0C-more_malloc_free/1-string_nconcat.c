#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ls1, ls2, lsout, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		for (ls1 = 0; s1[ls1] != '\0'; ls1++)
			;
		for (ls2 = 0; s2[ls2] != '\0'; ls2++)
			;
		if (n > ls2)
			n = ls2;
		lsout = ls1 + n;
		sout = malloc(sizeof(char) * (lsout + 1));
		if (sout == NULL)
			return (NULL);
		for (i = 0; i < ls1; i++)
			sout[i] = s1[i];
		for (i = 0; i < n; i++)
			sout[ls1 + i] = s2[i];
		sout[ls1 + n] = '\0';
		return (sout);
}