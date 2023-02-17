#include <stdio.h>
/**
* main - entry point
*
*Description: list abcd..z
*
*Return: 0(nothing)
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
