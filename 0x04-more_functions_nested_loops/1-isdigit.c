/**
 * _isdigit - Checks for digits.
 * @c: input value
 *
 * Return: 1 if character is digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
