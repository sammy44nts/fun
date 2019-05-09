#include "caesar.h"

int	one_try(int key, int len, char *msg) {
  if (key > 0 && key < 26)
    show_result(key, len, msg);
  else
    return (-1);
  return (0);
}

void	brute_force(int len, char *msg) {
  int	key = 1;

  while (key < 26) {
    show_result(key, len, msg);
    ++key;
  }
}
