#include "main.h"

/**
 * _isalpha -> checks for lowercase and uppercase characters
 * @c: a character to be checked on
 * Return: returns 1 if c lowercase or uppercase, returns 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
