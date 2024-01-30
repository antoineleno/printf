#include <unistd.h>

/**
 * _putchar - Function to print a single character
 * @c: character to be printed.
 * Return: The Character printed.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
