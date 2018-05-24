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
	size_t	max = strlen(a) + 1;
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

	char buff[11];

	bzero(buff, 11);
	strcpy(buff, "un deux 9");
	buff[9] = '6';
	i1 = strnstr(buff, "6", 10);
	i2 = ft_strnstr(buff, "6", 10);
	printf("One!! %s, %s", i2, i1 );
	(ft_strcmp(i1, i2) == 0? OK: NOK);

	i2 = ft_strnstr(buff, "6", 8);
	printf("Not found!! %s, %s", i2, ((void *)0) );
	(i2 == ((void *)0)? OK: NOK);


	char    buf2[] = "ozarabozaraboze123";
	i1 = strnstr(buf2, "ozaraboze", 15);
	printf("BIG AT END %s, %s", i2, i1 );
	i2 = ft_strnstr(buf2, "ozaraboze", 15);
    if(strcmp(i1, i2) == 0 && )
		OK;
	else
		NOK;
}
