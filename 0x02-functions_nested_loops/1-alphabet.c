#include <stdio.h>

/**
 * jack_bauer - prints 00:00 to 23:59
 * Description: prints 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
int H, M;

for (H = 0; H < 24; H++)
{
for (M = 0; M < 60; M++)
{
putchar((H / 10) + '0');
putchar((H % 10) + '0');
putchar(':');
putchar((M / 10) + '0');
putchar((M % 10) + '0');
putchar('\n');
}
}
}
int main(void) {
jack_bauer();
putchar((23 / 10) + '0' );
return 0;
}
