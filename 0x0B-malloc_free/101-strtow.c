#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *strtow: splits a string into words.
 * @str: pointer to array
 * Return: string ,NULL if not
 */

/**
* len -length of str
*@str: string input
* Return: length of the string
*/

int len(char *str)
{
int len = 0;

if (str != NULL)
{
while (str[len])
len++;
}
return (len);
}
/**
* num_words - counts the number of words in str
*@str: string input
*Return: number of words
*/

int num_words(char *str)
{
int i = 0, w = 0;

while (i <= len(str))
{
if ((str[i] != ' ') && (str[i] != '\0'))
{
i++;
}
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
w += 1;
i++;
}
else
{
i++;
}
}
return (w);
}

/**
 * *strtow: splits a string into words.
 * @str: pointer to array
 * Return: string ,NULL if not
 */

char **strtow(char *str)
{
char **s;
int i, j = 0, temp = 0, size = 0, words = num_words(str);

if (words == 0)
return (NULL);
s = (char **) malloc(sizeof(char *) * (words + 1));
if (s != NULL)
{
for (i = 0; i <= len(str) && words; i++)
{
if ((str[i] != ' ') && (str[i] != '\0'))
size++;
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
s[j] = (char *) malloc(sizeof(char) * size + 1);
if (s[j] != NULL)
{
while (temp < size)
{
s[j][temp] = str[(i - size) +temp];
temp++;
}
s[j][temp] = '\0';
size = temp = 0;
j++;
}
else
{
while (j-- >= 0)
free(s[j]);
free(s);
return (NULL);
}
}
}
s[words] = NULL;
return (s);
}
else
return (NULL);
}
