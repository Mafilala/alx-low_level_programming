#include "main.h"

/**
 * _isalpha - custom funtction to check alphabet
 * @c: An input character
 * Description: function check if a character is an alphabet or not
 * Return: 1 if is alphabet 0 otherwise
 */
int _isalpha(int c)
{
char i;
int alpha = 0;

for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
alpha = 1;
}

for (i = 'A'; i <= 'Z'; i++)
{
if (i == c)
alpha = 1;
}

return (alpha);
}
