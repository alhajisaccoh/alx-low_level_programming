#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: Printing alphabets in lower and uppercases
 *
 * Return:  Always 0 (success)
 */
int main(void)
{
char letters;

for (letters = 'a'; letters <= 'z'; letters++)
putchar(letters);
for (letters = 'A'; letters <= 'Z'; letters++)
putchar(letters);

putchar('\n');

return (0);
}
