#include "main.h"

/**
 * print_l_i - Print a long integer.
 * @number: Argument to pass while printing.
 * Return: Number of digits printed.
 */

long int print_l_i(long int number)
{
    char buffer[20];
    sprintf(buffer, "%ld", number);
    return write(1, buffer, _strlen(buffer));
}

/**
 * print_l_o - Print a long octal number.
 * @number: Number to be printed.
 * Return: Number of digits printed.
 */

long int print_l_o(long int number)
{
    char buffer[20];
    sprintf(buffer, "%lo", number);
    return write(1, buffer, _strlen(buffer));
}

/**
 * print_l_x - Print a long hexadecimal number in lowercase.
 * @hexadecimal_number: Number to be printed.
 * Return: Number of digits printed.
 */

long int print_l_x(long int hexadecimal_number)
{
    char buffer[20];
    sprintf(buffer, "%lx", hexadecimal_number);
    return write(1, buffer, _strlen(buffer));
}

/**
 * _printf_l_X - Print a long hexadecimal number in uppercase.
 * @hexadecimal_number: Number to be printed.
 * Return: Number of digits printed.
 */

long int _printf_l_X(long int hexadecimal_number)
{
    char buffer[20];
    sprintf(buffer, "%lX", hexadecimal_number);
    return write(1, buffer, _strlen(buffer));
}

/**
 * print_l_u_i - Print an unsigned long integer.
 * @number: Number to be printed.
 * Return: Number of digits printed.
 */

unsigned long int print_l_u_i(unsigned long int number)
{
    char buffer[20];
    sprintf(buffer, "%lu", number);
    return write(1, buffer, _strlen(buffer));
}
