#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* 
 * main - program entry point
 *  
 *  Return: 0 no matter what
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive");
	}
	else if (n < 0)
	{
		printf("%d is negative");
	}
	else {
		printf("%d is zero");
	}
	return (0);
}
