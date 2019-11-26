#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  return 0;
}

char ** parse_args(char * line) {
  char ** start = line;
  while(strsep(line, " ") != NULL) {
    printf("%s\n", *line);
  }
  return start;
}
