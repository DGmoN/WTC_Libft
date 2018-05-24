#include "../libft.h"
#include "utils/util.h"

void comp_split(char **a, char **b)
{
	int i = 0;
	int	com;
	while(b[i])
	{
		printf("\t%s = %s ", a[i], b[i]);
		if (com = strcmp(a[i], b[i]))
			NOKI(com, com);
		else
			OK;
		free(a[i]);
		i++;
	}
}

int main(void)
{
	put_head(" SPLIT ");

	char *a = "      split       this for   me  !      ";
	char *b = "                                   olol";
	char *c = "olol                                   ";
	char **_a = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	char **_b = ((char *[2]){"olol", ((void *)0)});
	char **_c = _b;

	char **A;

	A = ft_strsplit(a, ' ');
	printf("Simple :\n");
	comp_split(A, _a);

	printf("Single pre space: ");
	A = ft_strsplit(b, ' ');
	comp_split(A, _b);

	printf("Single post space: ");
	A = ft_strsplit(c, ' ');
	comp_split(A, _c);


}
