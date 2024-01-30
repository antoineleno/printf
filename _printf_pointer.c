#include "main.h"

/**
 * prt_p - Function to print an address.
 * @buffer: Buffer to store the number of character printed.
 * @list_of_argument: Number to find its address
 * Return: The number of character printed
*/

int prt_p(char *buffer, va_list list_of_argument)
{
	void *pointer = va_arg(list_of_argument, void *);
	unsigned long new_pointer = (unsigned long)pointer;

	return (_printf_hexadcimal_x_pointer(buffer, new_pointer));
}


/**
 * _printf_hexadcimal_x_pointer - Function to print the address
 * @buffer: Buffer to hold the number of character printed.
 * @number: Number to convert
 * Return: The number of character printed.
*/

int _printf_hexadcimal_x_pointer(char *buffer, unsigned long int number)
{
	unsigned long int remainder = 0;
	unsigned long int length = 0, m;
	char tmp;

	if (number == 0)
	{
		buffer[length++] = '0';
	}

	while (number > 0)
	{
		remainder = number % 16;
		if (remainder < 10)
		{
			buffer[length++] = remainder + '0';
		}

		else
		{
			remainder = remainder - 10 + 'a';
			buffer[length++] = remainder;
		}

		number = number / 16;
	}
	buffer[length++] = 'x';
	buffer[length++] = '0';
	for (m = 0; m < length / 2; m++)
	{
		tmp = buffer[m];
		buffer[m] = buffer[length - m - 1];
		buffer[length - m - 1] = tmp;
	}

	buffer[length++] = '\0';
	return (write(1, buffer, strlen(buffer)));
}
