#include "main.h"

/**
 * prt_i - Function to print an integer.
 * @list_of_argument: Argument to pass while printing.
 * @buffer: Buffer to store the character printed.
 * Return: Always the number of digits printed
*/

int prt_i(char  *buffer, va_list list_of_argument)
{
	int n, num, last, digit, exp;
	int i = 1;

	n = va_arg(list_of_argument, int);
	n = n / 10;
	num = n;
	last = n % 10;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	buffer[0] = '\0';
	return (i);
}
