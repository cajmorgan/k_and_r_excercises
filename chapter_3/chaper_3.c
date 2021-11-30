#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

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

// int binsearch(int x, int *v, int n) {
//   for (int i = 0; i < n - 1; i++) {
//     if (v[i] == x)
//       return i;
//   }

//   return -1;
// }

