#include <stdio.h>

/**
* main - Entry
*
* Description: Prints Hexadeciaml till f(16)
*
* Return: void
*/

int main(void)
{
	int num, alpha;

	num = 48;
	alpha = 97;
	while (num < 58)
	{
		putchar(num);
		num++;
	}
	while (alpha < 103)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
