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
	unsigned int remainder = 0;
	unsigned int length = 0, m;
	char tmp;

	if (hexadecimal_number == 0)
	{
		buffer[length++] = '0';
	}

	while (hexadecimal_number > 0)
	{
		remainder = hexadecimal_number % 16;
		if (remainder < 10)
		{
			buffer[length++] = remainder + '0';
		}

		else
		{
			remainder = remainder - 10 + 'A';
			buffer[length++] = remainder;
		}

		hexadecimal_number = hexadecimal_number / 16;
	}

	for (m = 0; m < length / 2; m++)
	{
		tmp = buffer[m];
		buffer[m] = buffer[length - m - 1];
		buffer[length - m - 1] = tmp;
	}

	buffer[length++] = '\0';
	return (write(1, buffer, _strlen(buffer)));
}

