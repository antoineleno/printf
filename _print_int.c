#include "main.h"

/**
 * prt_i - Function to print an integer.
 * @list_of_argument: Argument to pass while printing.
 * @buffer: Buffer to store the character printed.
 * Return: Always the number of digits printed
*/
int prt_i(char *buffer, va_list list_of_argument)
{
	int n = va_arg(list_of_argument, int);
	int number, remainder, digit;
	int i = 1;
	int place = 1;

	remainder = n % 10;
	n = n / 10;
	
	number = n;

	if (remainder < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		remainder = -remainder;
		i++;
	}

	if (number > 0)
	{
		while (number / 10 != 0)
		{
			place = place * 10;
			number = number / 10;
		}
		number = n;
		while (place > 0)
		{
			digit = number / place;
			_putchar(digit + '0');
			number = number - (digit * place);
			place = place / 10;
			i++;
		}
	}
	buffer[0] = '\0';
	_putchar(remainder + '0');
	return (i);
}
