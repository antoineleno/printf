#include "main.h"

/**
 * prt_per - Function to print a percent symbole
 * @buffer: Buffer to store the character printed.
 * @list_of_argument: Argument passed while printing.
 * Return: The number of character printed.
*/

int prt_per(char *buffer, va_list list_of_argument)
{
	char c = va_arg(list_of_argument, int);

	buffer[0] = '%';
	c = '%';
	_putchar(c);
	return (1);
}
