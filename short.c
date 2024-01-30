#include "main.h"

/**
 * print_h_i - Function to print an integer.
 * @number: Argument to pass while printing.
 * Return: Always the number of digits printed
*/

short int print_h_i(short int number)
{
	char buffer[20];

	sprintf(buffer, "%hd", number);
	return (write(1, buffer, _strlen(buffer)));
}


/**
 * _print_h_o - Function to print an octal number
 * @number: number to be printed
 * Return: Always the number of digits printed
*/

short int _print_h_o(short int number)
{
	char buffer[20];

	sprintf(buffer, "%ho", number);
	return (write(1, buffer , _strlen(buffer)));
}

/**
 * print_h_x - Function to print in hexadecimal
 * @hexadecimal_number: Number to be printed.
 * Return: The number of argument printed.
*/

short int print_h_x(short int hexadecimal_number)
{
	char buffer[20];

	sprintf(buffer ,"%hx", hexadecimal_number);
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

	sprintf(buffer , "%hX", hexadecimal_number);
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

	sprintf(buffer, "%hu", number);
	return (write(1, buffer, _strlen(buffer)));
}
