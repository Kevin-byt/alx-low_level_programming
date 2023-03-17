#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Gets the last digit of a random number
 *Return: Always 0 - Success
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if  (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 but not 0\n", n, l);
	}
	return (0);
}