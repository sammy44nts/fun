#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "caesar.h"

int	main(int ac, char **av) {
  int	len = 0;
  char	*msg = av[1];

  if (msg != NULL)
    len = strlen(msg);
  if (ac == 2)
    brute_force(len, msg);
  else if (ac == 3) {
    if (one_try(atoi(av[2]), len, msg)) {
      show_usage(av[0]);
      return (-1);
    }
  } else
    show_usage(av[0]);

  return (0);
}
