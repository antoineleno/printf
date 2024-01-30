#include "main.h"
#include <stdio.h>

/**
 * prt_c - Function to print a character.
 * @list_of_argument: Argument to passed while printing the function.
 * @buffer: Buffer to save the character.
 * Return: Always One
*/

int prt_c(char *buffer, va_list list_of_argument)
{
	char c = va_arg(list_of_argument, int);
	int i;

	sprintf(buffer, "%c", c);
	for (i = 0; i < 1; i++)
	{
		_putchar(buffer[i]);
	}
	
	return (1);
}
