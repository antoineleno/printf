#include "main.h"
/**
 * precision - Function to handle precision with string
 * @format: String to be formatted
 * @i: Index of character in the printf
 * @list_of_argument: List of argument
 * Return: Number of characters printed.
*/
int precision(const char *format, size_t *i, va_list list_of_argument)
{
	size_t j;
	int width = -1;
	int count = 0;

	for (j = *i + 1; format[j] != '\0' &&
	(_isdigit(format[j]) || format[j] == '*' || format[j] == '.'); j++)
	{
		if (_isdigit(format[j]))
		{
			width = (width == -1) ? 0 : width * 10 + (format[j] - '0');
		}
		else if (format[j] == '*')
		{
			j++;
			width = va_arg(list_of_argument, int);
			break;
		}
		else if (format[j] == '.')
		{
			width = 0;
		}
	}
	if (width != -1 && (format[j] == 's' || format[j] == 'r'))
	{
		char *str = va_arg(list_of_argument, char *);

		count += _string_printing(str, width);
		j++;
	}
	*i = j - 1;
	return (count);
}


/**
 * _string_printing - Function to print with precision
 * @str: String to be printed
 * @width: Number of characters tot be printed
 * Return: The numbrer of character printed
*/

int _string_printing(char *str, int width)
{
	int count = 0;

	if (str != NULL)
	{
		while (*str != '\0' && width > 0)
		{
			_putchar(*str);
			str++;
			width--;
			count++;
		}
	}

	return (count);
}
