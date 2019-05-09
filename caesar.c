#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	show_result(int key, int len, char *msg) {
  int	i;
  char	c, first, last;

  printf("key %c: ", key + 'A');
  i = 0;
  while (i < len) {
    c = (msg[i] - key);
    last = 0;
    if (msg[i] == ' ' || msg[i] == '\t')
      putchar(msg[i]);
    else if (msg[i] >= 'A' && msg[i] <= 'Z') {
      last = 'A';
      first = 'Z';
    } else if (msg[i] >= 'a' && msg[i] <= 'z') {
      last = 'a';
      first = 'z';
    }
    if (last)
      (c >= last ? putchar(c) : putchar(first + 1 - last + c));
    ++i;
  }
  putchar('\n');
}

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

char	*get_app_name(char *app_path) {
  int	split = strlen(app_path);

  while (app_path[split] != '/' && split > 0)
    --split;
  if (app_path[split] == '/')
    ++split;
  return (&app_path[split]);
}

void	show_usage(char *path) {
  printf("Usage: %s %s\n%s\n%s\n%s\n", get_app_name(path), "str [1-25]", \
	 "Try to decode a message by brute forcing or one try with the offset defined.",	\
	 "str is the message",						\
	 "offset is optional. If specified it will only check for this offset.");
}

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
