#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char c1[] = "i like the number seventeen";
  char c2[] = "the";
  char c = 'h';
  char *res1 = strchr(c1, c);
  char *res2 = strstr(c1, c2);
  printf("This is c1: %s\n", c1);
  printf("This is res1, using strchr with the char 'h': %s\n", res1);
  printf("This is res2, using strstr, with the string 'the' (i know i didnt use quotes give me a break): %s\n", res2);
  return 1;
}
