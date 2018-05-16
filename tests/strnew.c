#include "../lib_ft.h"

void	main(void)
{
	ft_putstr("Testring ft_strnew:");
	int num = 10;
	int index = 0;
	char *str;

	str = ft_strnew(num);
	while(index < num)
	{
		if(str[index] != '\0')
		{
			ft_putline("String not initialised with \\0");
			return;
		}
		index++;
	}
	ft_putline("O.K.");
	return;

}
