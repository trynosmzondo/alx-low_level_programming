#include "main.h"
/**
 * swap_int - swap variable values
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */
void swap_int()
{
	int *a, *b;

	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
