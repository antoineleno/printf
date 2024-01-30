#include "main.h"

/**
 * prt_i - Function to print an integer.
 * @buffer: Buffer to store the character printed.
 * @list_of_argument: Argument to pass while printing.
 * Return: Always the number of digits printed
 */
int prt_i(char *buffer, va_list list_of_argument)
{
    int n = va_arg(list_of_argument, int);
    int i = 0;

    if (n < 0) {
        _putchar('-');
        n = -n;
        i++;
    }

    if (n == 0) {
        _putchar('0');
        i++;
    } else {
        int exp = 1;
        int number = n;

        while (number / 10 != 0) {
            exp *= 10;
            number /= 10;
        }

        number = n;

        while (exp > 0) {
            int digit = number / exp;
            _putchar(digit + '0');
            number %= exp;
            exp /= 10;
            i++;
        }
    }

    buffer[0] = '\0';
    return i;
}
