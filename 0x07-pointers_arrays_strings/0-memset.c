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
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
	return (s);
 
