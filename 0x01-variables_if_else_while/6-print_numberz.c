#include <stdio.h>

/**
 * main - Print all single digit numbers from 0 to 9.
 * followed by a new line using a putchar
 * Return Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
