#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
 * Return:  0 always 
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
