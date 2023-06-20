#include "main.h"

/**
 * print_sign - checks sign of a number
 * @c: An input character
 * Description: function that check the sign of a given number
 * Return: 1 if positive 0 if zero -1 otherwise
 */
int print_sign(int c)
{
char sign;

if (c == 0)
{
sign = 0;
_putchar('0');
}
else if (c < 0)
{
sign = -1;
_putchar('-');
}
else
{
sign = 1;
_putchar('+');
}
return (sign);
}
