#include "main.h"

/**
 * prt_i - Function to print an integer.
 * @list_of_argument: Argument to pass while printing.
 * @buffer: Buffer to store the character printed.
 * Return: Always the number of digits printed
*/

int prt_i(char  *buffer, va_list list_of_argument)
{
	int n = va_arg(list_of_argument, int);
	int number, last = n % 10, digit;
	int i = 1;
	int exp = 1;

	n = n / 10;
	number = n;

	if (last < 0)
	{
		_putchar('_');
		number = - number;
		n = -n;
		last = -last;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = n;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number = number - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}

	_putchar(last + '0');
	buffer[0] = '\0';
	return (i);
}
