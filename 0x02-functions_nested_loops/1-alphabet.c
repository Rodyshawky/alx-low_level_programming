#include<stdio.h>
#include"main.h"

/**
 * print_alphabet - print the lowercase characters
 *
 * Return: No value retun
*/

void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{	_putchar(ch);
ch++;
}
_putchar('\n');
}
