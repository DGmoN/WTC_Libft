#ifndef FT_UTIL_H
# define FT_UTIL_H

#define OK printf("[O.K.]\n")
#define OKI(a, b) printf("[O.K.] : %i == %i\n", a, b)
#define OKP(a, b) printf("[O.K.] : %p == %p\n",a ,b)

#define NOK printf("[NOJOY]\n")
#define NOKP(a, b) printf("[NOJOY] : %p == %p\n",a ,b)
#define NOKI(a, b) printf("[NOJOY] : %i != %i\n", a, b)


void put_head(char *e); 

#endif
