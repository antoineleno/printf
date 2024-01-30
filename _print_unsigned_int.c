#include "main.h"

/**
 * prt_u_i - Function to print an integer.
 * @list_of_argument: Argument to print
 * @buffer: Buffer to store the character printed.
 * Return: Always the number of digits printed
*/

int prt_u_i(char  *buffer, va_list list_of_argument)
{
	unsigned int number = va_arg(list_of_argument, unsigned int);

	sprintf(buffer, "%u", number);
	write(1, buffer, 20);
	return (20);
}
