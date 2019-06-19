#ifndef _CAESAR_H_
# define _CAESAR_H_

#include "my.h"

int     one_try(int offset, int len, char *msg);
void	brute_force(int len, char *msg);
void	show_result(int offset, int len, char *msg);
void	show_usage(char *path);

#endif
