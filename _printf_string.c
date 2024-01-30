#include "main.h"
#include <stdio.h>

/**
 * prt_s - Function to print a string.
 * @list_of_argument: Argument to pass while printing.
 * @buffer: Buffer to received the string.
 * Return: The number of character printed.
*/

int prt_s(char *buffer, va_list list_of_argument)
{
	char *str;
	int length, i;

	str = va_arg(list_of_argument, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	length = _strlen(str);
	sprintf(buffer, "%s", str);

	for (i = 0; i < length; i++)
	{
		_putchar(buffer[i]);
	}

	return (length);
}
