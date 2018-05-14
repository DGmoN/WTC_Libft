#include <unistd.h>
#include "lib_ft.h"

void ft_putchar(char e)
{
	write(1, &e, 1);
}
