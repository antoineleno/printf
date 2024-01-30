#include "main.h"

/**
 * prt_i - Function to print an integer.
 * @list_of_argument: Argument to pass while printing.
 * @buffer: Buffer to store the character printed.
 * Return: Always the number of digits printed
*/

int prt_i(char  *buffer, va_list list_of_argument)
{
	int number = va_arg(list_of_argument, int);
	int length = 0, count = 0, isnegative = 0, i;
	char temporarybuffer;

	if (number < 0)
	{
		isnegative = 1;
		number = -number;
	}

	do {
		buffer[length++] = number % 10 + '0';
		number = number / 10;

	} while (number > 0);
	if (length > 10)
	{
		return (-1);
	}
	if (isnegative)
	{
		buffer[length++] = '-';
	}
	for (i = 0; i < length / 2; i++)
	{
		temporarybuffer = buffer[i];
		buffer[i] = buffer[length - i - 1];
		buffer[length - i - 1] = temporarybuffer;
	}
	buffer[length++] = '\0';
	count += write(1, buffer, length);
	return (count);
}
