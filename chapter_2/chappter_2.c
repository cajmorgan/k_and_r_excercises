#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

void reverse_string(char string[]) {
  int string_max_index, index, last_index;
  string_max_index = index = last_index = 0;

  while(string[index] != '\0') {
    string_max_index++;
    index++;
  }

  string_max_index--;
  last_index = string_max_index;
  index = 0;

  while(index <= last_index) {
    char temp;
    temp = string[index];
    string[index] = string[last_index];
    string[last_index] = temp;
    index++;
    last_index--;
  }
}


void printBinary(unsigned decimal) {
  const int NUMBER_BYTES = 50;
  char bytes[NUMBER_BYTES] = { '\0' };
  int spaceCounter = 1; 
  
  for (int i = 0; i < NUMBER_BYTES; i++) {
    bytes[i] = '0';
    int remainder = 0;
    if (spaceCounter % 5 == 0) {
      bytes[i] = ' ';
      spaceCounter = 1;
      continue;
    }

    remainder = decimal % 2;
    decimal = floor(decimal / 2);
    if (remainder == 1) {
      bytes[i] = '1';
    } 
    
    spaceCounter++;
  }

  char remainder = '0';
  for (int i = NUMBER_BYTES; i >= 0; i--) {
    if (remainder == '1')
      break;

    if (i % 5 == 0) {
      bytes[i - 1] = '\0';
      continue;
    }

    remainder = bytes[i - 1];
  }

  reverse_string(bytes);
  printf("%s\n", bytes);
}

unsigned setbits(unsigned x, unsigned y, int position, int number) {
  unsigned powered = pow(2, number) - 1;
  y = (~(~y & ~(~0 << number)) << (position - number + 1) | powered);
  unsigned int toOr = powered << (position - number + 1);

  x = x | toOr;
  return x & y;
  //Return x with the 'numberOf' bits that begin at 'position' set to the rightmost 'numberOf' bits of y leaving the rest unchanged
 }

// unsigned int getbits(unsigned int x, int p, int n) {
//   // return x >> 4;
//   // return x >> (p + 1 - n); 
// }

int main () {
  int x = 0b10101101, p = 7, n = 4;
  int y = 0b11001011;
  int returned_num = setbits(x, y, p, n);
  printBinary(returned_num);
  printf("getbits(%u (%x), %d, %d) = %u (%X)\n", x, x, p, n, returned_num, returned_num);

}

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