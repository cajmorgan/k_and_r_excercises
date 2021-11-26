#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>


// /*** EXERCISE 2.10 ***\
// \********************/

// void lower(char *string) {
//   int length = strlen(string);
//   for (int i = 0; i < length; i++) {
//     string[i] >= 41 && string[i] <= 90
//     ? string[i] += 32
//     : string[i]; 
//   }

// }


// /** Exercise 2.9 **/

// int bitcount(unsigned x) {
//   int b;
//   while((x &= (x - 1)) != 0)
//     b++;

//   return ++b;

// }

/*** EXERCISE 2.8 ***\
\********************/

// unsigned rightrot(x, n) {
//   int bits = (x & ~(~0 << n)) << (27 - n + 1);
//   x = (x >> n) | bits;
//   return x;
// }


/*** EXERCISE 2.7 ***\
\********************/

// unsigned invert(unsigned x, int position, int number) {
//   unsigned powered = pow(2, number) - 1;
//   int toInvert = ~(powered << (position - number));
//   int portion = (~(x >> (position - number)) & powered) << (position - number);
//   x = (x & toInvert) | portion;
//   return x;
// }


/*** EXERCISE 2.6 ***\
\********************/

// Return x with the 'numberOf' bits that begin at 'position' set to the rightmost 'numberOf' bits of y leaving the rest unchanged
// unsigned setbits(unsigned x, unsigned y, int position, int number) {
//   unsigned powered = pow(2, position - number) - 1;
//   y = (~(~y & ~(~0 << number)) << (position - number)) | powered;
//   unsigned int toOr = ~(~0 << number) << (position - number);

//   x = x | toOr;
//   return x & y;
//  }

// unsigned int getbits(unsigned int x, int p, int n) {
  // return x >> (p + 1 - n) & ~(~0 << n); 
// }



// int any(char string[], char match[]) {
//   int returnIndex = -1;

//   for (int i = 0; string[i] != '\0'; i++) {
//     for (int j = 0; match[j] != '\0'; j++) {
//       if (string[i] == match[j]) {
//         returnIndex = i;
//         break;
//       }
//     }

//     if (returnIndex != -1)
//       break;
//   } 

//   return returnIndex;
// }

// int main () {
//   char string_one[] = "hello";
//   char string_two[] = "io";
//   int index = any(string_one, string_two);

//   printf("%d", index);
// }



// void squeeze(char string[], char string_match[]) {
//   int i, j;


//   for (i = 0; string[i] != '\0'; i++) {
//     for (j = 0; string_match[j] != '\0'; j++) {
//       if (string[i] == string_match[j]) {
//         int counter = i;
//         while(string[counter] != '\0') {
//           string[counter] = string[counter + 1];
//           counter++;
//         }

//         i--;
//         continue;
//       }
//     }
//   }
// }

// int main () {
//   char string[] = "hello förfanlla";
//   char target[] = "";
//   squeeze(string, target); 

//   printf("%s", string);
// }


// void squeeze(char s[], char c[]) {
//   int i, skipper, j;

//   for (i = skipper = 0; s[i] != '\0'; i++) {
//     for(j = 0; c[j] != '\0'; j++) {
//       if (s[i] == c[j]) {
//         break;
//       }

//       if (s[i] != c[j] && c[j + 1] == '\0') {
//         s[skipper] = s[i];
//         skipper++;
//       }
//     }
//   }
   
    
//   s[skipper] = '\0';

//   printf("%s", s);
// }

// int main () {
//   char helo[] = "abcdec";
//   char target[] = "ced";
//   squeeze(helo, target);
// }

// enum values {LOWER_CASE = 87, UPPER_CASE = 55, NUMBER = 48};

// int calculate(int number, int powerValue) {
//   return number * pow(16, powerValue);
// }

// int htoi(char string[]) {
//   int results = 0;
//   int powerValue = 0;
//   int stringLength = strlen(string);
//   for (int i = stringLength - 1; i >= 0; i--) {
//     int toConvert = 0;

//     if (string[i] == 88 || string[i] == 120)
//       break;

//     if (string[i] > 96 && string[i] < 103) 
//       toConvert = calculate(string[i] - LOWER_CASE, powerValue);

//     if (string[i] > 64 && string[i] < 71) 
//       toConvert = calculate(string[i] - UPPER_CASE, powerValue);

//     if (string[i] > 47 && string[i] < 58) 
//       toConvert = calculate(string[i] - NUMBER, powerValue);

//     results += toConvert;
//     powerValue++;
//   }

//   printf("%d\n", results);
//   return 0;
// }


// int main() {
//   char input[50] = { '\0' };
//   scanf("%s", input);
//   htoi(input);

//   return 0;
// }


// int main () {
//   // char
//   // short 
//   // int 
//   // long
//   // char 'c';
//   int sixteen = 1;

//   for (int i = 0; i < 16; i++) {
//     sixteen *= 2;
//   }

//   printf("%d", sixteen - 1);

//   // printf("char limit: %d TO %d\n", CHAR_MIN, CHAR_MAX);
//   // printf("short limit: %d TO %d \n", SHRT_MIN, SHRT_MAX);
//   // printf("Int limit: %d TO %d \n", INT_MIN, INT_MAX);
//   // printf("Long limit: %ld TO %ld \n", LONG_MIN, LONG_MAX);
// }