#include "main.h"

/**
* main - entry point
*
* Description: prints lowercase alphabet
*             
*
* Return: 0(void)
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
