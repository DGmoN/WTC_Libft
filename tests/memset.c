#include "../lib_ft.h"
#include <stdlib.h>
void	main(void)
{
	ft_putstr("Testing ft_memset: ");
	int chars = 10;
	char i = 'a';
	char *q = (char *) ft_memalloc(sizeof(char *) * chars);
	ft_memset(q, i, chars);
	int index = 0;
	while(index < chars)
	{
		if(q[index] != i){
			ft_putstr("Failed, char at index '");
			ft_putstr(ft_itoa(index));
			ft_putstr("' != '");
			ft_putchar(i);
			ft_putline("'");
			return;
		}
		index++;
	}
	ft_putline("O.K.");
}
