#include <stdio.h>

/**
 * main -  function that checks for uppercase character
 *
 * Return: 1 if it is an uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	char c;
	if (c>= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
