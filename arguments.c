
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "arguments.h"

char ** parse_args(char * line){
  char ** steve = (char **)malloc(5*sizeof(char*));
  int counter = 0;
  
  char *s;
  while(line != NULL){
    printf("%s\n",line);
    //printf("%s\n",s);
    s = strsep(&line,"-");
    printf("s after strsep: %s\n",s);
    printf("line after strsep: %s\n",line);
    steve[counter] = s;
    printf("what's at steve[counter] now: %s\n",steve[counter]);
    //strcpy(s,steve[counter]);
    //line = s;
    counter++;
  }
  printf("reached\n");
  steve[counter+1] = NULL;
  printf("what's steve[counter]: %s\n",steve[counter]);
  return steve;
}
int main(){
  char l[100] = "woah-this-is-cool";
  char *s1 = l;

  char * s2;
  char ** a = parse_args(s1);
  while(a != NULL){
    printf("%s\n",*a);
    a++;
  }
  return 0;
}




