#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int n, lastDigt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigt = n % 10;
	if (lastDigt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigt);
	else if (lastDigt == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigt);
	else if (lastDigt < 6 && lastDigt != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigt);

	return (0);
}
