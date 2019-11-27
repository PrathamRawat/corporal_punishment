#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char ** parse_args(char * line) {
  char ** start = calloc(sizeof(start), 256);
  // strcpy(start[0], line);
  start[0] = line;
  printf("%s\n", start[0]);
  int counter = 1;
  while(strsep(&line, " ") != NULL) {
    start[counter] = line;
    counter++;
  }
  return start;
}

int main() {
  char run[10] = "ls -l";
  // *run = "ls -l";
  char ** arguments = parse_args(run);
  execvp(arguments[0], arguments);
  return 0;
}
