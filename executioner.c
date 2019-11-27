#include <stdio.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line) {
  char ** start = line;
  while(strsep(line, " ") != NULL) {
    printf("%s\n", line);
  }
  return start;
}

int main() {
  char ** arguments = parse_args("ls -l");
  execvp(arguments[0], arguments);
  return 0;
}

