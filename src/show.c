#include <stdio.h>
#include "caesar.h"

void	show_usage(char *path) {
  printf("Usage: %s %s\n%s\n%s\n%s\n", get_app_name(path), "str [1-25]", \
	 "Try to decode a message by brute forcing or one try with the offset defined.",	\
	 "str is the message",						\
	 "offset is optional. If specified it will only check for this offset.");
}

void	show_result(int offset, int len, char *msg) {
  int	i;
  char	c, first, last;

  printf("offset %d: ", offset);
  i = 0;
  while (i < len) {
    c = (msg[i] - offset);
    last = 0;
    if (msg[i] >= 'A' && msg[i] <= 'Z') {
      last = 'A';
      first = 'Z';
    } else if (msg[i] >= 'a' && msg[i] <= 'z') {
      last = 'a';
      first = 'z';
    } else 
      putchar(msg[i]);
    if (last)
      (c >= last ? putchar(c) : putchar(first + 1 - last + c));
    ++i;
  }
  putchar('\n');
}
