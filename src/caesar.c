#include "caesar.h"

int	one_try(int offset, int len, char *msg) {
  if (offset > 0 && offset < 26)
    show_result(offset, len, msg);
  else
    return (-1);
  return (0);
}

void	brute_force(int len, char *msg) {
  int	offset = 1;

  while (offset < 26) {
    show_result(offset, len, msg);
    ++offset;
  }
}
