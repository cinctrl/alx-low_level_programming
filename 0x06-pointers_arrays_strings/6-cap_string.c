#include "main.h"
#include <stdio.h>

/**
 * isLower - Determines whether ascii is lowercase
 *
 * @c: Character
 *
 * Return: 1 if true, 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - Determines whether ascii is a delimiter
 *
 * @c: Character
 *
 * Return: 1 if true, 0 if false
 */
