#include "../libft.h"
#include "utils/util.h"
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	put_head(" ATOI ");
	
	char *a = "12345";
	char *b = "-12345";
	char *c = "SA12345";
	char *d = "\n\t\v\f\r -0123";
	char *e = "-123THERE IS A NYANCAT UNDER YOUR BED";
	char *f = "\t\v\f\r\n \f- \f\t\n\r    06050";
	char *g = "+85557";
	char *h = "\n          42 24 96 77 12 47";

	int A = ft_atoi(a);
	int B = atoi(a);
	printf("Simple %i ?= %i:", A,B);
	(A==B?OK:NOKI(A,B));

	A = ft_atoi(b);
	B = atoi(b);
	printf("Negat %i ?= %i:", A,B);
	(A==B?OK:NOKI(A,B));

	A = ft_atoi(c);
	B = atoi(c);
	printf("Conta %i ?= %i:", A,B);
	(A==B?OK:NOKI(A,B));

	A = ft_atoi(d);
	B = atoi(d);
	printf("WSPAC %i ?= %i:", A,B);
	(A==B?OK:NOKI(A,B));

	A = ft_atoi(e);
	B = atoi(e);
	printf("Neglng %i ?= %i:", A,B);
	(A==B?OK:NOKI(A,B));

	A = ft_atoi(f);
	B = atoi(f);
	printf("PAIN %i ?= %i:", A,B);
	(A==B?OK:NOKI(A,B));

	A = ft_atoi(g);
	B = atoi(g);
	printf("Wif+ %i ?= %i:", A,B);
	(A==B?OK:NOKI(A,B));

	A = ft_atoi(h);
	B = atoi(h);
	printf("Unclean %i ?= %i:", A,B);
	(A==B?OK:NOKI(A,B));



}
