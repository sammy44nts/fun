#include <string.h>

char	*get_app_name(char *app_path) {
  int	split = strlen(app_path);

  while (app_path[split] != '/' && split > 0)
    --split;
  if (app_path[split] == '/')
    ++split;
  return (&app_path[split]);
}
