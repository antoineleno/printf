#include "main.h"

/**
 * prt_b - Function to convert a decimal number to binary number.
 * @buffer: Buffer to store the number of character printed
 * @list_of_argument: Argument to pass while printing.
 * Return: The binary number
*/

int prt_b(char *buffer, va_list list_of_argument)
{
	unsigned int number = va_arg(list_of_argument, unsigned int);
	char temp;
	unsigned int j;
	unsigned int length = 0;

	while (number > 0)
	{
		buffer[length++] = number % 2 + '0';
		number = number / 2;
	}

	if (length == 0)
	{
		buffer[length++] = '0';
	}

	for (j = 0; j < length / 2; j++)
	{
		temp = buffer[j];
		buffer[j] = buffer[length - j - 1];
		buffer[length - j - 1] = temp;
	}

	buffer[length++] = '\0';
	return (write(1, buffer, _strlen(buffer)));
}
