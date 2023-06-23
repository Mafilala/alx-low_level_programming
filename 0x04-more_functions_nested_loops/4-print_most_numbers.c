#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 and  9  except 2 and 4.
 * Return: no return.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 52 && i != 50)
			_putchar(i);
	}
	_putchar('\n');
}
