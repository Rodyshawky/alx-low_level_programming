#include<stdio.h>
#include"main.h"
#include <string.h>

/**
 * check_palindrome - check if string is palindrome
 * @s: pointer string
 * @l: input left side
 * @r: input right side
 * Return: 1 On success 0 if not.
 */

int check_palindrome(char *s, int l, int r)
{
if (l >= r)
return (0);
else if (s[l] == s[r])
return (check_palindrome(s, l + 1, r - 1));
else
return (0);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: pointer string
 * Return: 1 On success 0 if not.
 */

int is_palindrome(char *s)
{
int len;

len = strlen(s);
return (check_palindrome(s, 0, len - 1));
}
