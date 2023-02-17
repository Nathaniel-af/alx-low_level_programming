#include <stdio.h>

/**
* main - entry point
*
* Description: prints lowercase alphabet
*             then uppercase alphabet
*
* Return: 0(void)
*/

int main(void)
{
	int i, j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
