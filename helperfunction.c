#include "main.h"

/**
 * _strcpy - Function to copy a string.
 * @destination: Destination string.
 * @source: Source string.
 * Return: Destination string.
*/

char *_strcpy(char *destination, char *source)
{
	int i;

	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}

	return (destination);
}

/**
 * _strlen - Function to calculate the length of a string.
 * @str: String to calculate the length.
 * Return: The length of the string.
*/

int _strlen(const char *str)
{
	int length_of_str = 0;

	while (*str != '\0')
	{
		length_of_str++;
		str++;
	}

	return (length_of_str);
}

/**
 * _strncpy - Function to copy n character of a string.
 * @dest: Destination string.
 * @srs: Source String.
 * @n: Number of character to be copied.
 * Return: The destination string.
*/

char *_strncpy(char *dest, char *srs, int n)
{
	int i = 0;
	int j = 0;

	while (j < n && srs[i] != '\0')
	{
		dest[i] = srs[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}


/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
