# include <stdio.h>

/**
 * main - entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %l byte(s)\n", sizeof(char));
	printf("Size of an int: %l byte(s)\n", sizeof(int));
	printf("Size of a long int: %l byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %l byte(s)\n", sizeof(long long int));
	printf("Size of a float: %l byte(s)\n", sizeof(float));
	return (0);
}
