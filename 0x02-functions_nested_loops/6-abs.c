#include "main.h"

/**
 * _abs - abs function
 * @c: An input character
 * Description: function that do abs operation
 * Return: returns the absolute value of a give number
 */
int _abs(int c)
{
if (c < 0)
c *= -1;
return (c);
}
