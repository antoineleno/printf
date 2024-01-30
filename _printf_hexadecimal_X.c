#include "main.h"

/**
 * prt_hx_X - Function to print in hexadecimal
 * @buffer: Buffer to store the characters printed.
 * @list_of_argument: Argument passed while printing.
 * Return: The number of argument printed.
*/

int prt_hx_X(char *buffer, va_list list_of_argument)
{
	unsigned int hexadecimal_number = va_arg(list_of_argument, unsigned int);

	int length = sprintf(buffer, "%X", hexadecimal_number);

	return (write(1, buffer, length));
}

