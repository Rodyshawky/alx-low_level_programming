/**
 * print_line - print line by number n
 *
 * @n: input number
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
