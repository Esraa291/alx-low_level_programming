#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: the character to search for
 *
 * Return: a pointer to the first occurrence of the character c in the string s,
 *	or NULL if the not found
*/
char *_strchr(char *s, char c);
{
	int itr;

	for (itr = 0; s[itr] >= '\0' ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
