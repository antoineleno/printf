#include "main.h"

/**
 * prt_s - Function to print a string.
 * @list_of_argument: Argument to pass while printing.
 * @buffer: Buffer to received the string.
 * Return: The number of character printed.
*/

int prt_s(char *buffer, va_list list_of_argument)
{
	char *str = va_arg(list_of_argument, char *);
	int count = 0;
	int length = _strlen(str);

	if (length >= buffersize)
	{
		count = write(1, str, length);
	}

	else
	{
		_strncpy(buffer, str, buffersize - 1);
		buffer[buffersize - 1] = '\0';
		count =  write(1, buffer, length);
	}

	return (count);
}

