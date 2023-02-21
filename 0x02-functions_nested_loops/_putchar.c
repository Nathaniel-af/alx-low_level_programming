#include <unistd.h>
#include "main.h"

/**
*_putchar - function defination
*
*@c: input(parameter)
*
* Description: outputs chars
*
* Return: stdoutput
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
