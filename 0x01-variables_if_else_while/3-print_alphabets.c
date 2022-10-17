#include <stdio.h>
/*
*C program to print all upper case and lower case alphabets.
*Return: 0
*/
int main()
{
	char i, j;

	for (i='a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (j='A'; i <= 'Z'; i++)
	{
	putchar(j);
	}
	putchar('\n');
	return 0;

}


