#include "main.h"
/**
*_isupper - a function that check for uppercase
*@c: an input character
*Return: 1 if c is uppercase or 0 if c is lowercase
*/
int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;

for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
