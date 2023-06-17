#include <stdio.h>
/**
 * main - main block
 * Description: prints heaxadecimal numbers
 * Return: 0
 */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (i = 97; i <= 101; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}

