#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "arguments.h"

char ** parse_args(char * line){
  char ** steve = (char **)malloc(5*sizeof(char*));
  int counter = 0;
  char *s;
  while(line){
    s = strsep(&line," ");
    steve[counter] = s;
    counter++;
  }
  return steve;
}

int main(){
  char line[100] = "ls -a -l";
  char ** args = parse_args(line);
  execvp(args[0], args);
  return 0;
}




