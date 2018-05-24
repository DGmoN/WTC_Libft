#include <stdio.h>
#include "../libft.h"
#include "utils/util.h"
#include <string.h>

int main(void)
{
	put_head(" TRIM ");
	
	char *_a = "";
	char *a = "There are no spaces";
	char *b = "\n \t \v There are no spaces";
	char *c = "There are no spaces \n\t  \f\v";
	char *d = "\t \v\fThere are no spaces\f\n\t   ";
	char *e = "    \t   \t\n\v \f";

	char *A;

	A = ft_strtrim(a);
	printf("No spaces: ");
	(strcmp(A,a) == 0 ? OK:NOK);

	A = ft_strtrim(b);
	printf("Front spaces: ");
	(strcmp(A,a) == 0 ? OK:NOK);

	A = ft_strtrim(c);
	printf("Spaces at end: ");
	(strcmp(A,a) == 0 ? OK:NOK);

	A = ft_strtrim(d);
	printf("Spaces at both: ");
	(strcmp(A,a) == 0 ? OK:NOK);

	A = ft_strtrim(e);
	printf("BLANK: '%s'->'%s'", A, _a);
	(strcmp(A,_a) == 0 ? OK:NOK);

	A = ft_strtrim(_a);
	int B = strcmp(A,_a); 
	printf("Empty: '%s'->'%s'", A, _a);
	(B == 0 ? OK:NOKI(B,0));


}
