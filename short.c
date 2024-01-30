#include "main.h"

/**
 * print_h_i - Function to print an integer.
 * @number: Argument to pass while printing.
 * Return: Always the number of digits printed
*/

short int print_h_i(short int number)
{
	char buffer[20];
	short int length = 0, count = 0, isnegative = 0, i;
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


/**
 * _print_h_o - Function to print an octal number
 * @number: number to be printed
 * Return: Always the number of digits printed
*/

short int _print_h_o(short int number)
{
	char buffer[20];
	short int length = 0;
	short int count = 0;
	short int k;
	char tmp;

	while (number > 0)
	{
		buffer[length++] = number % 8 + '0';
		number = number / 8;
	}

	if (length == 0)
	{
		return (count += _putchar('0'));
	}

	for (k = 0; k < length / 2; k++)
	{
		tmp = buffer[k];
		buffer[k] = buffer[length - k - 1];
		buffer[length - k - 1] = tmp;
	}
	buffer[length++] = '\0';

	return (write(1, buffer, _strlen(buffer)));
}

/**
 * print_h_x - Function to print in hexadecimal
 * @hexadecimal_number: Number to be printed.
 * Return: The number of argument printed.
*/

short int print_h_x(short int hexadecimal_number)
{
	char buffer[20];
	short int remainder = 0;
	short int length = 0, m;
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
			remainder = remainder - 10 + 'a';
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

/**
 * _printf_h_X - Function to print unsigned long int
 * @hexadecimal_number: Buffer to store the characters printed.
 * Return: The number of argument printed.
*/

short int _printf_h_X(short int hexadecimal_number)
{
	char buffer[20];
	short int remainder = 0;
	short int length = 0, m;
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

/**
 * print_h_u_i - Function to print an integer.
 * @number: Number to be printed.
 * Return: Always the number of digits printed
*/

short int print_h_u_i(short int number)
{
	char buffer[20];
	unsigned short int length = 0, count = 0, i;
	char temporarybuffer;


	do {
		buffer[length++] = number % 10 + '0';
		number = number / 10;

	} while (number > 0);

	if (length > 12)
	{
		return (-1);
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
