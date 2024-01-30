#include "main.h"

/**
 * prt_o - Function to print an octal number
 * @buffer: Buffer to store the number
 * @list_of_argument: Argument to pass while printfing.
 * Return: Always the number of digits printed
*/

int prt_o(char *buffer, va_list list_of_argument)
{
	unsigned int number = va_arg(list_of_argument, int);
	unsigned int length = 0;
	unsigned int count = 0;

	while (number > 0)
	{
		buffer[length++] = number % 8 + '0';
		number = number / 8;
	}

	if (length == 0)
	{
		return (count += _putchar('0'));
	}

	sprintf(buffer, "%o", number);
	write(1, buffer, length);
	return (length);
}
