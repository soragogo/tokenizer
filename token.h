#ifndef TOKEN_H
# define TOKEN_H


#include <libc.h>
#include <stdio.h>
typedef enum {
	EXPANDABLE,
	EXPANDABLE_QUOTED,
	NON_EXPANDABLE,
	PIPE
} TYPE;

typedef struct s_list {
	char *arg;
	TYPE type;
} t_token;







#endif
