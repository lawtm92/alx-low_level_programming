#include <stdio.h>
/**
*main - print alphabets in lower case then, upper case follow by a new line
*Return: 0
*/
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}
