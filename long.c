#include "main.h"

/**
 * print_l_i - Function to print an integer.
 * @number: Argument to pass while printing.
 * Return: Always the number of digits printed
*/

long int print_l_i(long int number)
{
	char buffer[20];

	sprintf(buffer, "%ld", number);
	return (write(1, buffer, _strlen(buffer)));
}


/**
 * _print_l_o - Function to print an octal number
 * @number: number to be printed
 * Return: Always the number of digits printed
*/

long int _print_l_o(long int number)
{
	char buffer[20];

	sprintf(buffer, "%lo", number);
	return (write(1, buffer, _strlen(buffer)));
}

/**
 * print_l_x - Function to print in hexadecimal
 * @hexadecimal_number: Number to be printed.
 * Return: The number of argument printed.
*/

long int print_l_x(long int hexadecimal_number)
{
	char buffer[20];


	sprintf(buffer, "%lx", hexadecimal_number);
	return (write(1, buffer, _strlen(buffer)));

}

/**
 * _printf_l_X - Function to print unsigned long int
 * @hexadecimal_number: Buffer to store the characters printed.
 * Return: The number of argument printed.
*/

long int _printf_l_X(long int hexadecimal_number)
{
	char buffer[20];

	sprintf(buffer, "%lX", hexadecimal_number);
	return (write(1, buffer, _strlen(buffer)));
}

/**
 * print_l_u_i - Function to print an integer.
 * @number: Number to be printed.
 * Return: Always the number of digits printed
*/

unsigned long int print_l_u_i(unsigned long int number)
{
	char buffer[20];

	sprintf(buffer, "%lu", number);
	return (write(1, buffer, _strlen(buffer)));
}
