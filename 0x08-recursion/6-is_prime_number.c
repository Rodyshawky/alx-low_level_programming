#include<stdio.h>
#include"main.h"

/**
  * check_prime - check is_prime_number n
  * @n: input number
  * @num: base number to test prime
  * Return: 1 if prime, 0 if not
  */
int check_prime(int n, int num)
{
if (num % n == 0 || num < 2)
return (0);
else if (n == num - 1)
return (1);
else if (num > n)
return (check_prime(n + 1, num));
return (1);
}
/**
 * is_prime_number - get n is prime or not
 * @n: input number
 * Return: 1 if success , 0 if not
 */
int is_prime_number(int n)
{
return (check_prime(2, n));
}
