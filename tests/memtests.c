#include "../libft.h"
#include "utils/util.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	test_memalloc()
{
	put_head(" MEMALLOC ");
	size_t max = 20;
	char *a = ft_memalloc(sizeof(char *) * max);
	char *b = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char *c = ft_memalloc(sizeof(char *) * max);
	(memcmp(a, b, max) ? NOK : OK);

	printf("MEMDEL:\t\t\t\t\t\t\t");

	free(a);
	a = 0x0;
	ft_memdel(((void **)&c));
	(a == c? OK : NOKP(a, c));

}


void	test_memcmp()
{
	put_head(" MEMCMP ");
	char *a = "THIS IS A STRING";
	char *b = "this is a string";
	char *c = "THIS IS A STRING";
	char *d = "not eaual atall";
	char *e = "";

	printf("MEMCMP #1 '%s'->'%s': \t", a, b);
	size_t len = strlen(a);
	int bone = memcmp(a, b, len);
	int peg = ft_memcmp(a, b, len);
	((bone == peg) ? OKI(bone, peg): NOK);

	printf("MEMCMP #2 '%s'->'%s': \t", a, c);
	bone = memcmp(a, c, len);
	peg = ft_memcmp(a, c, len);
	((bone == peg) ? OKI(bone, peg): NOK);

	printf("MEMCMP #3 '%s'->'%s': \t", a, d);
	bone = memcmp(a, d, len);
	peg = ft_memcmp(a, d, len);
	((bone == peg) ? OKI(bone, peg): NOK);
	
	printf("MEMCMP #4 '%s'->'%s': \t\t\t", a, e);
	bone = memcmp(a, e, len);
	peg = ft_memcmp(a, e, len);
	((bone == peg) ? OKI(bone, peg): NOK);
}

void	test_memset()
{
	put_head(" MEMSET ");

	size_t max = 20;
	char a[max];
	char b[max];

	printf("MEMSET #1 set 20 to B: \t\t\t\t\t");
	memset(a, 'Q', max);
	ft_memset(b, 'Q', max);
	(memcmp(a, b, max)? NOK: OK);

	printf("MEMSET #1 set 0 to B: \t\t\t\t\t");
	memset(a, 'Q', 0);
	ft_memset(b, 'Q', 0);
	(memcmp(a, b, max)? NOK: OK);

}

void	test_memmove()
{
	put_head(" MEMMOVE ");
	int max = 20;
	char *a = "Maybe 10 long";
	char b[max];
	char c[max];

	strcpy(b, a);
	strcpy(c, a);

	printf("MEMMOVE #1A %p->%p:\t\t", b, b + 7);
	char *resb = ft_memmove(b + 7, b, strlen(a));
	char *resc = ft_memmove(c +7, c, strlen(a));
	(resb - b == 7? OKP(resb, b) : NOKP(resb, b));

	printf("MEMMOVE #1B %s->%s:\t\t", resc, resb);
	(memcmp(resc, resb, strlen(a)) ? NOK: OK);

}

int	main(void)
{
	test_memalloc();
	test_memcmp();
	test_memset();
	test_memmove();
}
