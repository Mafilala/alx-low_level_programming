#include "main.h"
/**
 * main - prgram entry point
 * Description: prints '_putchar'
 * Return: 0
 */
int main(void)
{
int i;

const char* arr = "_putchar";
for (i = 0; arr[i] != '\0' ; i++)
{
_putchar(arr[i]);
}
putchar('\n');
return (0);
}

