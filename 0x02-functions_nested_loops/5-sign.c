#include "main.h"

/**
 * print_sign - checks sign of a number
 * @c: An input character
 * Description: function that check the sign of a given number
 * Return: 1 if positive 0 if zero -1 otherwise
 */
int print_sign(int c)
{
int sign;

if (c == 0)
{
sign = 0;
}
else if (c < 0)
{
sign = -1;
}
else
{
sign = 1;
}
return (sign);
}
