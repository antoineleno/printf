#include "main.h"
#include <stdio.h>

/**
 * prt_i - Function to print an integer.
 * @list_of_argument: Argument to pass while printing.
 * @buffer: Buffer to store the character printed.
 * Return: Always the number of digits printed
*/
int prt_i(char *buffer, va_list list_of_argument)
{
	int n = va_arg(list_of_argument, int);

	int length = sprintf(buffer, "%d", n);

	if (length == 0)
	{
		_putchar('\n');
		return (0);
	}
	if (length < 0)
	{
		return (-1);
	}
	return (write(1, buffer, length));
}
