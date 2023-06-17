#include <stdio.h>
/**
 * main - main block
 * Description: prints a - to - z except e and q
 * Return: 0
 */
int main(void)
{
int i;
char ch;

for (i = 97; i <= 122; i++)
{
if (i == 101 || i == 113)
{
continue;
}
ch = i;
putchar(ch);
}
putchar('\n');
return (0);
}

