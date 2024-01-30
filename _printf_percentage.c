#include "main.h"

/**
 * prt_per - Function to print a percent symbole
 * @buffer: Buffer to store the character printed.
 * @list_of_argument: Argument passed while printing.
 * Return: The number of character printed.
*/

int prt_per(char *buffer, va_list list_of_argument)
{
	char *string = va_arg(list_of_argument, char *);

	string[0] = '%';
	string[1] = '\0';
	buffer[0] = string[0];
	buffer[1] = string[1];

	return (write(1, buffer, _strlen(buffer)));
}
