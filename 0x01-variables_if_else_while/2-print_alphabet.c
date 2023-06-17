#include <stdio.h>

/**
 * main - main block
 * Description: prints a - to - z
 * Return: 0
 */
int main(void)
{
int i;

for (i = 97; i <= 122; i++)
{
char ch = i;
putchar(ch);
}
putchar('\n');
return (0);
}
