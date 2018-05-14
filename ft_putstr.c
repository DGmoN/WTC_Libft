#include "lib_ft.h"

void ft_putstr(char * str)
{
	int index;

	index = 0;
	while(str[index])
	{
		ft_putchar(str[index++]);
	}
}
