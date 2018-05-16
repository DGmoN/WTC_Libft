#include "../lib_ft.h"
#include <strings.h>
#include <stdlib.h>

void main(void)
{
	ft_putstr("Testing memalloc: ");
	size_t length = 6;
	size_t index = 0;
	unsigned char *test = (char *) ft_memalloc(sizeof(char *) * length);

	while(index < length)
	{
		if(test[index] != '\0')
		{
			ft_putline("Contetnt not set to 0");
			return;
		}
		index++;
	}
	ft_putline( "O.K.");
}
