#include"main.h"

/**
* more_numbers - print numbers  using _putchar
*
*/
void more_numbers(void)
{
	int i, j, num;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			num = j;
			if ( j > 9)
				{
					_putchar(1 + '0');
					num = j % 10;
				}
			else
			{
				_putchar(num + 48);
			}

		}
		_putchar('\n');
	}

}
