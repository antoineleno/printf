#include "main.h"

/**
 * width - Calculates the width for printing.
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list_of_argument: List of arguments.
 * Return: Width.
 */
int width(const char *format, size_t *i, va_list list_of_argument)
{
	size_t j;
	int k, l, width = 0, count;

	for (j = *i + 1; format[j] == '0' || _isdigit(format[j]); j++)
	{
		width = (format[j] == '0') ? width * 10 : width * 10 + (format[j] - '0');
		count++;
	}

	for (; format[j] != '\0' && (_isdigit(format[j]) || format[j] == '*'); j++)
	{
		width = _isdigit(format[j]) ? width * 10 + (format[j] - '0') :
		va_arg(list_of_argument, int);
		if (_isdigit(format[j]) == 0 && format[j] != '*')
			break;
	}

	if (format[*i + 1] == '0' && (format[*i + count] == 'd' ||
	format[*i + 1] == 'i' || format[*i + count] == 'u'))
	{
		for (k = 0; k < width - count; k++)
			_putchar('0');
	}
	else if (format[j] == 'd' || format[j] == 'i' || format[j] == 'c')
	{
		for (l = 0; l < (format[j] == 'c' ? (width - 1) : (format[j] == 'd' ||
		format[j] == 'i' ? width : 0)); l++)
			_putchar(' ');
	}

	*i = j - 1;
	return (width);
}
