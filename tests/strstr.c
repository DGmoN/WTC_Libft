#include "../libft.h"
#include "utils/util.h"

int main()
{
	put_head("STRSTR");
	char *a	= "This is a good idea I sear!";
	char *b = "idea";
	char *c = "This";
	char *d = "";

	char *A = ft_strstr(a, b);
	char *B = strstr(a, b);
	printf("#1 Find 'idea': %s, %s\t\t\t", A, B);
	(A == B? OK: NOKP(A,B));

	A = ft_strstr(a, c);
	B = strstr(a, c);
	printf("#2 Find 'This': %s, %s", A, B);
	(A == B? OK: NOKP(A,B));

	A = ft_strstr(a, d);
	B = strstr(a, d);
	printf("#3 Find empty: %s, %s", A, B);
	(A == B? OK: NOKP(A,B));

	A = ft_strstr(a, a);
	B = strstr(a, a);
	printf("#4 Find identicle: %s, %s", A, B);
	(A == B? OKP(A, B): NOKP(A,B));

	A = ft_strstr(d, c);
	B = strstr(d, c);
	printf("#5 Find int: %s, %s", A, B);
	(A == B? OK: NOKP(A,B));

	char *s1 = "MZIRIBMZIRIBMZP";
	char *s2 = "MZIRIBMZP";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
	printf("SIMPLE!! %s, %s", i2, i1 );
	(i1 == i2? OK: NOK);

	put_head(" STRNSTR ");
	size_t	max = strlen(a);
	A = ft_strnstr(a, b, max);
	B = strnstr(a, b, max);
	printf("#1 Find 'idea': %s, %s\t\t\t", A, B);
	(A == B? OK: NOKP(A,B));

	A = ft_strnstr(a, c, max);
	B = strnstr(a, c, max);
	printf("#2 Find 'This': %s, %s", A, B);
	(A == B? OK: NOKP(A,B));

	A = ft_strnstr(a, d, max);
	B = strnstr(a, d, max);
	printf("#3 Find empty: %s, %s", A, B);
	(A == B? OK: NOKP(A,B));

	A = ft_strnstr(a, a, max);
	B = strnstr(a, a, max);
	printf("#4 Find identicle: %s, %s", A, B);
	(A == B? OKP(A, B): NOKP(A,B));

	A = ft_strnstr(d, c, max);
	B = strnstr(d, c, max);
	printf("#5 Find int: %s, %s", A, B);
	(A == B? OK: NOKP(A,B));

	s1 = "MZIRIBMZIRIBMZE123";
	s2 = "MZIRIBMZE";
	max = strlen(s2);
	i1 = strnstr(s1, s2, max);
	i2 = ft_strnstr(s1, s2, max);
	printf("SIMPLE!! %s, %s", i2, i1 );
	(i1 == i2? OK: NOK);
}
