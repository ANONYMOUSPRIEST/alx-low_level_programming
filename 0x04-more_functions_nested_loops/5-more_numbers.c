#include <stdio.h>
#include "main.h"

/**
*more_numbers - prints numbers to 14
*
*Returns: nothing
*/

void more_numbers(void)
{
	int n1, int n2;

	for (n1 = 0; n2 <= 14; n++)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			if (n2 > 9)
			{
				putchar((n2 / 10) + '0');
			}
			putchar((n2 % 10) + '0');
		}
		putchar(10);
	}
}
