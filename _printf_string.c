#include "main.h"

/**
 * prt_s - Function to print a string.
 * @list_of_argument: Argument to pass while printing.
 * @buffer: Buffer to received the string.
 * Return: The number of character printed.
*/

int prt_s(char *buffer, va_list list_of_argument)
{
	char *str;
	int count = 0, length;
	
	str = va_arg(list_of_argument, char *);

	length = _strlen(str);

	if (length == 0)
	{
		_putchar('\n');
		return (0);
	}

	else if (length >= buffersize)
	{
		count += write(1, str, length);
	}

	else
	{
		_strncpy(buffer, str, buffersize - 1);
		count +=  write(1, buffer, length);
	}

	return (count);
}

