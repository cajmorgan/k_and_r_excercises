#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>



/** Exercise 4.2 **\
| Converts string  |
| of fp to double  |
\******************/

// Using 
//   char string[] = "63.132e6";

// double atof_new(char string[]) {
//   int length = strlen(string);
//   double val = 0.00;
//   int str_pos = 0;
//   while(isdigit(string[str_pos]))
//     val = 10 * val + string[str_pos++] - '0';

//   if (string[str_pos] == '.' || string[str_pos] == ',')
//     str_pos++;

//   int power = 1;
//   while(isdigit(string[str_pos])) {
//     val = 10 * val + string[str_pos++] - '0';
//     power *= 10;
//   }
  
//   val = val / power;

//   if (string[str_pos++] == 'e') {
//     int to_power = 0;
//     while(str_pos < length) {
//       to_power = 10 * to_power + string[str_pos++] - '0';
//     }

//     for (int i = 0; i < to_power; i++)
//       val = val * 10;
//   }
  
//   return val;

// }

// int main () {
//   char string[] = "63.132e6";
  
//   double val = atof_new(string);
//   printf("%f", val);
// }

/** Exercise 4.1 **\
|  Return indexes  |
| of pattern found |
|   from right     |
|    in string     |
\******************/

// int *strrindex(char string[], char pattern[]) {
//   int p_index, m_index;
//   int i = strlen(string)-1;
  
//   while(string[i] != '\0') {
//     m_index = i;
//     p_index = strlen(pattern)-1;
//     while (string[m_index] == pattern[p_index] && pattern[p_index] != '\0') {

//       p_index--;
//       m_index--;
//     }

//     if (p_index == -1) {
//       static int indexes[2] = { 0 };
//       indexes[0] = m_index+1;
//       indexes[1] = i;
//       return indexes;
//     }

//     i--; 
//   }
  
//   static int NOT_FOUND = -1;
//   return &NOT_FOUND;
// }


// int main() {
//   char string[] = "Hello pretty there face";
//   char pattern[] = "there";

//   int *indexes = strrindex(string, pattern);
//   printf("Results: \n");
//   for (int i = 0; i < 2; i++) {
//     printf("%d\n", indexes[i]);
//   }
// }