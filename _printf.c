#include "main.h"
#include <stdio.h>
/**
 * _printf - Function like printf function in c.
 * @format: Argument of printf.
 * Return: The number of character printed.
*/
int _printf(const char *format, ...)
{
	size_t i, j;
	int count = 0;
	char *buffer = (char *)malloc(buffersize * sizeof(char));

	fmt_t fmt_types[] = {
		{'s', prt_s}, {'c', prt_c}, {'d', prt_i}, {'i', prt_i}, {'p', prt_p},
		{'u', prt_u_i}, {'o', prt_o}, {'b', prt_b}, {'%', prt_per}, {'r', prt_rev},
		{'x', prt_hx_x}, {'X', prt_hx_X}, {'S', _print_ascii_S}, {'R', _print_root13}
	};
	va_list list_of_argument;

	va_start(list_of_argument, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			count += flags_handling(format, &i);
			count += print_long(format, &i, list_of_argument);
			count += print_short(format, &i, list_of_argument);
			count += width(format, &i, list_of_argument);
			count += precision(format, &i, list_of_argument);
			for (j = 0; j < sizeof(fmt_types) / sizeof(fmt_types[0]); j++)
			{
				if (format[i + 1] == fmt_types[j].type)
				{
					count += fmt_types[j].function(buffer, list_of_argument);
					i++;
					break;
				}
			}
		}
		else
		{
			count += write(1, &format[i], 1);
		}
	}
	printf("%d\n", count);

	va_end(list_of_argument);
	free(buffer);
	return (count);
}
