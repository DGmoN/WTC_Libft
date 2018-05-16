#include "../lib_ft.h"
#include <strings.h>
#include <stdlib.h>
void	main(void)
{
	ft_putstr("Testing ft_memdel: ");
	char *Q = (char *)malloc(sizeof(char *));

	*Q = 'A';
	
	ft_memdel((void **)(&Q));
	if(Q != NULL)
	{
		ft_putline("Pointer not set to NULL");
		return;
	}
	ft_putline("O.K.");
}
