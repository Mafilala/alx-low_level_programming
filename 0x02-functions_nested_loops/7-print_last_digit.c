#include "main.h"

/**
 * print_last_digit - prints the value of the last digit
 * @c: An input character
 * Description: extracts the last digit of a number
 * Return: returns the last digit of a number
 */
int print_last_digit(int c)
{
int ld = c % 10;
if (ld < 0)
ld *= -1;
_putchar(ld + 48);
return (ld);
}
