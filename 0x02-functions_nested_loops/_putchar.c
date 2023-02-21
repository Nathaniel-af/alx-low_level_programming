#include <unistd.h>
#include "main.h"

/**
*_putchar - function defination
*
*@n: input(parameter)
*
* Description: outputs chars
*
* Return: stdoutput
*/

int _putchar(char n)
{
	return (write(1, &n, 1));
}
