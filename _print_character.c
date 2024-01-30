#include "main.h"

/**
 * prt_c - Function to print a character.
 * @list_of_argument: Argument to passed while printing the function.
 * @buffer: Buffer to save the character.
 * Return: Always One
*/

int prt_c(char *buffer, va_list list_of_argument)
{
	int count = 0;
	char c = va_arg(list_of_argument, int);

	buffer[0] = c;
	buffer[1] = '\0';
	count = write(1, buffer, 2);

	return (count);
}

