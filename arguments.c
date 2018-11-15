#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "arguments.h"

char ** parse_args(char * line){
  char ** steve = (char **)malloc(strlen(line)+1);

  int counter = 0;
  /*
  char *s = strsep(&line," ");
  steve[0] = line;
  while(s){
    s = strsep(&s," ");
    //char *temp = (char *)malloc(sizeof(line));
    //strcpy(line,temp);
    steve[counter] = s;
    counter++;
  }
  */
  parse_recursive(line,steve,counter);
  counter++;
  while(s){
    s = parse_recursive(s,steve,counter);
    counter++;
  }
  return steve;
}

char * parse_recursive(char * l, char ** s, int counter){
  if(l){
    char *st = strsep(&l," ");
    s[counter] = l;
    return st;
  }else{
    return NULL;
  }
}

int main(){
  char l[100] = "woah-this-is-cool";
  char *s1 = l;

  char * s2;
  char ** a = parse_args(s1);
  while(a){
    printf("%s\n",*a);
    a++;
  }
  return 0;
}
