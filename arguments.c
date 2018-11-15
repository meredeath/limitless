
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "arguments.h"

char ** parse_args(char * line){
  char ** steve = (char **)malloc(strlen(line)+1);

  int counter;
 
  //counting 5 args...                                                          
  for (counter = 0; counter <= 5; counter++){
    char *s = strsep(&line, " ");
    steve[counter] = s;
  }
  //steve[0] = line;                                                            
  /*                                                                            
  while(s){                                                                     
    // s = strsep(&s," ");                                                      
    //char *temp = (char *)malloc(sizeof(line));                                
    //strcpy(line,temp);   
    */
  return steve;
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




