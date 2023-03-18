#include <stdio.h>
/**
 * main - functin
 * Description:  program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
