#include "main.h"
/**
 * print_long - Function to print long values
 * @format: Argument of the main function
 * @i: Value in the loop
 * @list_of_argument: Arugment of the variadic function
 * Return: The number of word printed.
*/

int print_long(const char *format, size_t *i, va_list list_of_argument)
{
	size_t j = *i + 1;
	int count = 0;

	if (format[j] == 'l')
	{
		long int value = va_arg(list_of_argument, long int);

		switch (format[j + 1])
		{
		case 'i':
		case 'd':
			count += print_l_i(value);
			break;
		case 'o':
			count += _print_l_o(value);
			break;
		case 'x':
			count += print_l_x(value);
			break;
		case 'X':
			count += _printf_l_X(value);
			break;
		case 'u':
			count += print_l_u_i(value);
			break;
		default:
			break;
		}
		*i = j + 1;
	}
	return (count);
}


/**
 * print_short - Function to print long values
 * @format: Argument of the main function
 * @i: Value in the loop
 * @list_of_argument: Arugment of the variadic function
 * Return: The number of word printed.
*/

int print_short(const char *format, size_t *i, va_list list_of_argument)
{
	size_t j = *i + 1;
	int count = 0;

	if (format[j] == 'h')
	{
		short int value = va_arg(list_of_argument, long int);

		switch (format[j + 1])
		{
		case 'i':
		case 'd':
			count += print_h_i(value);
			break;
		case 'o':
			count += _print_h_o(value);
			break;
		case 'x':
			count += print_h_x(value);
			break;
		case 'X':
			count += _printf_h_X(value);
			break;
		case 'u':
			count += print_h_u_i(value);
			break;
		default:
			break;
		}
		*i = j + 1;
	}
	return (count);
}
