#include <stdio.h>
/**
 * main - main block
 * Description: prints 1 - to - 9
 * Return: 0
 */
int main(void)
{
int i;
char ch;

for (i = 48; i <= 57; i++)
{
char ch = i;
putchar(ch);
}
putchar('\n');
return (0);
}
