#include "main.h"
#include <stdio.h>
/**
 * _print_root13 - Function to encode the string.
 * @buffer: Buffer to keep the character printed.
 * @list_of_argument: Argument pass while printing.
 * Return: Return the number of character printed.
*/

int _print_root13(char *buffer, va_list list_of_argument)
{
	char *string = va_arg(list_of_argument, char *);
	int i, count = 0;

	if (string == NULL)
	{
		return (-1);
	}

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
		{
			buffer[i] = ((string[i] - 'A' + 13) % 26 + 'A');
		}

		else if (string[i] >= 'a' && string[i] <= 'z')
		{
			buffer[i] = ((string[i] - 'a' + 13) % 26 + 'a');
		}

		else
		{
			buffer[i] = string[i];
		}
	}
	buffer[i] = '\0';
	count += write(1, buffer, _strlen(buffer));
	return (count);
}
