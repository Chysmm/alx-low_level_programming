#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci n *umbers, starting with 1 and 2,
 *separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
int count;
unsigned long fib1 = 1, fib2 = 2, sum;
printf("%lu, %lu, ", fib1, fib2);
for (count = 3; count <= 50; count++)
{
sum = fib1 + fib2;
printf("%lu", sum);
if (count < 50)
{
printf(",");
}
else
{
printf("\n");
}
fib1 = fib2;
fib2 = sum;
}
return (0);
}
