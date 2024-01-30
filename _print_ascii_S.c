#include "main.h"

/**
 * _print_ascii_S - Function to print ascii value less
 * than 32 and greater than 127
 * @list_of_argument: Argument to passed while printing
 * @buffer: Buffer to store the number of character printed.
 * Return: The number of character printed.
*/

int _print_ascii_S(char *buffer, va_list list_of_argument)
{
	char *string = va_arg(list_of_argument, char *);
	int i, count = 0, j = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] < 32 || string[i] >= 127)
		{
			buffer[j++] = '\\';
			buffer[j++] = 'x';
			count += _putchar('\\');
			count += _putchar('x');
			if (string[i] < 16)
			{
				buffer[j++] = '0';
				count += _putchar('0');
				count += _print_ascii_hex(buffer, string[i]);
			}
		}
		else
		{
			count += _putchar(string[i]);
		}
	}

	return (count);
}

/**
 * _print_ascii_hex - Function to convert the ascii value in hexa
 * @hexadecimal_number: Number to convert
 * @buffer: Buffer to store the number of character printed.
 * Return: The number of character pinted.
*/

int _print_ascii_hex(char *buffer, int hexadecimal_number)
{
	int remainder = 0;
	int length = 0, m;
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
