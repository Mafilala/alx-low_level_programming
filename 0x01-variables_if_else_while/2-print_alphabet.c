#include <stdio.h>

/**
 * main - entry point
 * Description: prints a to z
 * Returns: 0
 */
int i;

int main(void) {
for (i = 97; i <= 122; i++)
{
char ch = i;
putchar(ch);
}
putchar('\n');
}