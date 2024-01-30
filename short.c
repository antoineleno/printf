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
	char buffer[16];
	sprintf(buffer, "%hd", number);
	write(1, buffer, 16);
	return (16);
}

/**
 * print_h_x - Function to print in hexadecimal
 * @hexadecimal_number: Number to be printed.
 * Return: The number of argument printed.
*/

short int print_h_x(short int hexadecimal_number)
{
	char buffer[16];
	sprintf(buffer, "%hd", hexadecimal_number);
	write(1, buffer, 16);
	return (16);
}

/**
 * _printf_h_X - Function to print unsigned long int
 * @hexadecimal_number: Buffer to store the characters printed.
 * Return: The number of argument printed.
*/

short int _printf_h_X(short int hexadecimal_number)
{
	char buffer[16];
	sprintf(buffer, "%hd", hexadecimal_number);
	write(1, buffer, 16);
	return (16);
}

/**
 * print_h_u_i - Function to print an integer.
 * @number: Number to be printed.
 * Return: Always the number of digits printed
*/

short int print_h_u_i(short int number)
{
	char buffer[16];
	sprintf(buffer, "%hd", number);
	write(1, buffer, 16);
	return (16);
}
