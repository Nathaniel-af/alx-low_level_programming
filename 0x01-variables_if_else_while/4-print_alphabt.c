#include <stdio.h>

/**
* main - Entry
*
* Description: Prints a - z and escapes q and e
*
* Return: 0(void)
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
