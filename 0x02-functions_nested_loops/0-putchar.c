#include "main.h"

/**
*main - Entry
*
*Description: prints _putchar
*
*Return: void(0)
*/


int main(void)
{
	char n[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(n[i]);
	}

	_putchar('\n');

	return (0);
}
