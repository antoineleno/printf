#include "main.h"

/**
 * prt_b - Function to convert a decimal number to binary number.
 * @buffer: Buffer to store the binary representation.
 * @list_of_argument: Argument to pass while printing.
 * Return: The number of characters in the binary representation.
 */
int prt_b(char *buffer, va_list list_of_argument)
{
	unsigned int number = va_arg(list_of_argument, unsigned int);
	unsigned int temp;
	unsigned int length = 0;

	if (number == 0)
	{
		buffer[length++] = '0';
	}
	else
	{
		while (number > 0)
		{
			buffer[length++] = number % 2 + '0';
			number = number / 2;
		}
	}

	
	for (unsigned int i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = temp;
	}


	buffer[length] = '\0';

	return length;
}
