#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


/** Exercise 4.1 **\
|  Return indexes  |
| of pattern found |
|   from right     |
|    in string     |
\******************/
int *strrindex(char string[], char pattern[]) {
  int p_index, m_index;
  int i = strlen(string)-1;
  
  while(string[i] != '\0') {
    m_index = i;
    p_index = strlen(pattern)-1;
    while (string[m_index] == pattern[p_index] && pattern[p_index] != '\0') {

      p_index--;
      m_index--;
    }

    if (p_index == -1) {
      static int indexes[2] = { 0 };
      indexes[0] = m_index+1;
      indexes[1] = i;
      return indexes;
    }

    i--; 
  }
  
  static int NOT_FOUND = -1;
  return &NOT_FOUND;
}


int main() {
  char string[] = "Hello pretty there face";
  char pattern[] = "there";

  int *indexes = strrindex(string, pattern);
  printf("Results: \n");
  for (int i = 0; i < 2; i++) {
    printf("%d\n", indexes[i]);
  }
}