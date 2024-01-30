#include "main.h"
/**
 * flags_handling - Function to handle flags
 * @format: String to check for flags
 * @i: Loop value
 * Return: The corresponding flag.
*/
int flags_handling(const char *format, size_t *i)
{

	int count = 0;
	size_t j;

	for (j = *i + 1; format[j] != '\0'; j++)
	{
		switch (format[j])
		{
		case '+':
			if (format[j + 1] == 'd' || format[j + 1] == 'i')
			{
				count += _putchar('+');
			}
			break;
		case '#':
			if (format[j + 1] == 'x' || format[j + 1] == 'X')
			{
				count = 1 + _putchar('0');
				format[j + 1] == 'x' ? _putchar('x') : _putchar('X');
			}
			break;
		case ' ':
			if (format[j + 1] == 'd' || format[j + 1] == 'i')
			{
				count += _putchar(' ');
			}

		default:
			goto exit_loop;
		}
	}
exit_loop:
*i = j - 1;
	return (count);
}
