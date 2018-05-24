#include "../libft.h"
#include "utils/util.h"
int	main()
{
	put_head("STRNSTR");
	char	*a = "un deux 9";

	printf("#1: ");
	char *A	= strnstr(a, "deux", 10);
	char *B = ft_strnstr(a, "deux", 10);
	(strncmp(A,B) == 0? OK:NOK);

}
