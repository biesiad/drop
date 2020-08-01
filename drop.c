#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *stream = stdin;
  char *line = NULL;
  size_t len = 0;
  ssize_t nread;
  int ndrop = 1;

  if (argc == 2)
  {
    ndrop = atoi(argv[1]);
  }

  while ((nread = getline(&line, &len, stream)) != -1)
  {
    if (ndrop <= 0)
    {
      fwrite(line, nread, 1, stdout);
    }
    else
    {
      ndrop--;
    }
  }

  free(line);
  fclose(stream);
  exit(EXIT_SUCCESS);
}
