#include<stdio.h>
#include"main.h"

/**
 * main - Entry point
 *
 * Description: print alphabitic lowercase letters
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
	_putchar(ch);
ch++;
}
