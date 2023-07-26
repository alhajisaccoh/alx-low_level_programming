#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print all alphabets in lower cases except q and e.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
