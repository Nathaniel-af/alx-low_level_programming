#include <stdio.h>

/**
* main - Entry
*
* Description: Print 0-9 but only use char var
*
* Return: 0(void)
*/

int main(void)
{
	int  num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
