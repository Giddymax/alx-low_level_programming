#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabets in lower case,exclude e & q
 *
 * Return: O, if successful
 */
int main(void)
{
	char lc;

	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}
	putchar('\n');
	return (0);
}
