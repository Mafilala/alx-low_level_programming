#include "main.h"

/**
 * print_alphabet_x10 - what can i say
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: void.
 */

void print_alphabet_x10(void)
{
char ch;
int i;

for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
