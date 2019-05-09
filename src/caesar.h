#ifndef _CAESAR_H_
# define _CAESAR_H_

#include "my.h"

int     one_try(int key, int len, char *msg);
void	brute_force(int len, char *msg);
void	show_result(int key, int len, char *msg);
void	show_usage(char *path);

#endif
