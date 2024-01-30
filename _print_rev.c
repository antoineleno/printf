#include "main.h"

/**
 * prt_rev - Function to print a string in reverse
 * @s: STring
 * Return: The number of character printed.
*/
void _print_rev_recursion(char *s);

int prt_rev(char *buffer, va_list list_of_argument)
{

	int i, length;
	char *string;

	string = va_arg(list_of_argument, char *);
	length = _strlen(string);

	while (string[i] != '\0')
	{
		buffer[i] = string[i];
		i++;
	}

	_print_rev_recursion(string);
	return (length);
}

/**
 * _print_rev_recursion - Function to reverse a string.
 * @s: String to be reverse
 * Return: Void nothing to be return
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}


