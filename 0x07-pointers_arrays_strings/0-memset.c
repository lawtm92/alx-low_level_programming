#include "main.h"
/**
*_memset - write a function that fill memory with constant value
*@s: pointer to memory area to fill
*@b: constant byte
*@n: number of bytes to be fill
*Return: a pointer to the memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
