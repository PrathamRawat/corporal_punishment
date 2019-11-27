#include <stdio.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line) {
  char start[256][256];
  strcpy(start[0], line);
  printf("%s\n", start[0]);
  int counter = 1;
  while(strsep(&line, " ") != NULL) {
    strcpy(start[counter], line);
  }
  return start;
}

int main() {
  // char run[10] = "ls -l";
  // *run = "ls -l";
  char ** arguments = parse_args("ls -l");
  execvp(arguments[0], arguments);
  return 0;
}
