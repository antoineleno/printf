#include "main.h"

/**
 * prt_o - Function to print an octal number
 * @buffer: Buffer to store the number
 * @list_of_argument: Argument to pass while printfing.
 * Return: Always the number of digits printed
*/

int prt_o(char *buffer, va_list list_of_argument)
{
	int number = va_arg(list_of_argument, int);

	sprintf(buffer, "%o", number);
	write(1, buffer, 20);
	return (20);
}
