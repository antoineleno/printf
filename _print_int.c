#include "main.h"
#include <stdio.h>
#include <stdlib.h>  // Include the necessary header for malloc

/**
 * prt_i - Function to print an integer.
 * @list_of_argument: Argument to pass while printing.
 * @buffer: Buffer to store the character printed.
 * Return: Always the number of digits printed
 */
int prt_i(char *buffer, va_list list_of_argument)
{
    int n = va_arg(list_of_argument, int);
    buffer = (char *)malloc(12 * sizeof(char));

    if (buffer == NULL) {
        return -1;
    }

    int length = sprintf(buffer, "%d", n);

    if (length < 0) {
        free(buffer);
        return -1;
    }

    int written = write(1, buffer, length);

    free(buffer);

    return written;
}
