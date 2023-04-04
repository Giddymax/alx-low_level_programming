#include <stdio.h>

/**
 * main - prints the lower case of the alphabet
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char lc;

	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(lc);
	}
	return (0);
}
