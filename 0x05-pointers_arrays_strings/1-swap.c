/**
 * swap_int - a function that reset any val to 98
 * @a: - pointer to int
 * @b: - pointer to int
 * Description: accepts pointer and update the value
 * Return: void
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
