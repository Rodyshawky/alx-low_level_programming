#include<stdio.h>
#include"main.h"

/**
 * print_alphabet_x10 - print the lowercase characters ten times
 *
 * Return: No value retun
*/

void print_alphabet_x10(void)
{

int ch, i;
for (i = 0 ; i < 10 ; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
