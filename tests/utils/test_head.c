#include <stdio.h>

#define FILL_CHR "#*****************************#"
#define EDGE_CHR "###############################"

static char*	get_name(char *e)
{
	char *str = (char *) malloc(sizeof(e) * strlen(FILL_CHR));
	strcpy(str, FILL_CHR);
	
	memcpy(str + 5, e, strlen(e));
	return (str);
}

void	put_head(char *e)
{
	printf("\n%s\n%s\n%s\n%s\n%s\n", EDGE_CHR, FILL_CHR, get_name(e),FILL_CHR,EDGE_CHR);
}
