#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - this is the main method
  *@void :return nothing
  *Return: zero in success
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* print the last digit of n */
	lastDigit = n % 10;
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0\n", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}
	return (0);
}
