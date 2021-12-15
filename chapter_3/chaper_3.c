#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


/*** EXERCISE 3.5 **\
// void itob(int n, char s[], int b) {
//   int counter = 0;
//   int remainder = 0;
//   char rConvert = '\0'; 
//   while(n != 0) {
//     remainder = n % b;
//     if (remainder > 9) 
//       s[counter] = remainder + 55;
//     else
//       s[counter] = remainder + '0';

//     counter++;
//     n /= b;
//   };

//   int j = strlen(s)-1;
//   for (int i = 0; i < j; i++) {
//     char temp = s[i];
//     s[i] = s[j];
//     s[j--] = temp;
//   }
  
//   printf("%s", s);
// }

// int main() {
//   char s[100] = {'\0'};
//   int n = 673321; 
//   int b = 16;
//   itob(n, s, b);
// }

/*** EXERCISE 3.3 **\
 *
 * */
// #define DASH 45
// char *expand(char *s1) {
// static char stringToReturn[100] = {'\0'};
// int newStrIndex = 0;
// bool toAdd = false;

// for (int i = 0; s1[i] != '\0'; i++) {
//   if (s1[i] == DASH && s1[i-1] > 0 && s1[i+1] > 0) {
//     char temp = s1[i-1];
//     do {
//       stringToReturn[newStrIndex] = temp;

//       if (s1[i-1] > s1[i+1]) 
//         temp--;
//       else {
//         toAdd = true;
//         temp++;
//       }

//       newStrIndex++;
//     } while((toAdd && temp != s1[i+1] + 1) || (!toAdd && temp != s1[i+1] - 1));
//   } 

// }

//   return stringToReturn;
// }


// /*** EXERCISE 3.2 **\
// \********************/

// void descape(char *string, char *target) {
//   int pos = 0;
//   int skip = 0;
//   for (int i = 0; i < strlen(target); i++) {
//     if (skip) {
//       skip = 0;
//       continue;
//     }

//     if (target[i] == '\\') {
//       if (target[i + 1] == 'n')
//         string[pos++] = '\n';
//       else if (target[i + 1] == 't')
//         string[pos++] = '\t';
//       skip = 1;
//     } else
//       string[pos++] = target[i];
//   }
// }


// void escape(char *string, char *target) {
//   int pos = 0;
//   for (int i = 0; i < strlen(target); i++) {
//     switch(target[i]) {
//       case '\n':
//         string[pos++] = '\\';
//         string[pos++] = 'n';
//         break;
//       case '\t':
//         string[pos++] = '\\';
//         string[pos++] = 't';
//       default:
//         string[pos++] = target[i];
//     }
//   }
// }

// /*** EXERCISE 3.1 **\
// \********************/

// int search(int x, int *v, int n) {
//   for (int i = 0; i < n - 1; i++) {
//     if (v[i] == x)
//       return i;
//   }

//   return -1;
// }

