#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char a = '0';
char ch = 'a';
while (a <= '9')
{
putchar(a);
a++;
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
