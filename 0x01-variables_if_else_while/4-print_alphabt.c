#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 133)
		{			               n++;
		  continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}