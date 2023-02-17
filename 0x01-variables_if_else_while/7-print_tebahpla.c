#include <stdio.h>

/**
* main - Entry
*
* Description: Print the alphabets in reverse
*
* Return: 0(void)
*/

int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
