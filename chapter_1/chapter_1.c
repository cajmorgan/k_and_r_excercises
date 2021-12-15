/* Yo */
#include <stdio.h>
#include <stdbool.h>
//yo
int main() {
  FILE *fp = fopen("chapter_1.c", "r");
  int c;
  bool comment_found, slash_comment_found, new_line_found;
  comment_found = slash_comment_found = new_line_found = false;

  while((c = fgetc(fp)) != EOF) {
    if (c == '/' && comment_found == false && slash_comment_found == false) {
      c = fgetc(fp);
      if (c == '*') {
        comment_found = true;
        continue;
      } else if (c == '/') {
        slash_comment_found = true;
        continue;
      }

      putchar('/');
    } else if (comment_found == true) {
      if (c == '*') {
        c = fgetc(fp);
        if (c == '/') {
          comment_found = false;
          continue;
        }
      }
    } else if (slash_comment_found == true) {
      if (c == '\n') {
        slash_comment_found = false;
      }

      continue;
    }

    if (comment_found == false && slash_comment_found == false) {
      if (c == '\n' && new_line_found == false) {
        new_line_found = true;
      } else if (c == '\n' && new_line_found == true) {
        continue;
      } else if (c != '\n') {
        new_line_found = false;
      }
      putchar(c);
    }
  }


  
  // for (int i = 0; program[i] != '\0'; i++) {
  //   if (program[i] == '/' && comment_found == false) {
  //     if (program[i + 1] == '/' || program[i + 1] == '*') {
  //       comment_found = true;
  //       program[i] = ' ';
  //       program[i + 1] = ' ';
  //     }
  //   } else if (comment_found == true) {
  //     if (program[i] == '*' && program[i + 1] == '/') {
  //       program[i] = ' ';
  //       program[i + 1] = ' ';
  //       comment_found = false;
  //       continue;
  //     } else if (program[i] == '\n') {
  //       comment_found = false;
  //     }

  //     program[i] = ' ';
  //   }
  // }

}





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

// void reset_string(char string[]) {
//   for(int i = 0; string[i] != '\0'; i++) {
//     string[i] = '\0';
//   }
// }


// #include <stdio.h>

// int main () {
//   int c;
//   int is_space = 0;

//   while((c = getchar()) != EOF) {
//     if (c == ' ' && is_space == 0) {
//       is_space = 1;
//       putchar(c);
//     } else if (c != ' ' && c != '\t') {
//       putchar(c);
//       is_space = 0;
//     } 
//   }
// }



// #include <stdio.h>

// #define MAXLENGTH 1000
// #define PRINTOVER 20

// int check_length(char string[]);
// void reset_string(char string[]);

// int main() {
//   int c;
//   char string[MAXLENGTH] = { '\0' };
//   int index = 0;

//   while((c = getchar()) != EOF) {
//     if(c != '\n') {
//       string[index] = c;
//       index++;
//       continue;
//     } else if (check_length(string) > PRINTOVER) {
//       printf("%s\n", string);
//     }

//     reset_string(string);
//     index = 0;
//   }

//   return 0;
// }

// int check_length(char string[]) {
//   int string_length = 0;

//   for(int i = 0; string[i] != '\0'; i++) {
//     string_length++;
//   }

//   return string_length;
// }



// #include <stdio.h>

// int main() {
//   int c;
//   int arr[26] = { 0 };
//   int index = 0;

//   while((c = getchar()) != EOF) {
//     if(c >= 97 && c <= 122) {
//       arr[c - 'a'] += 1;
//     } else if (c == '\n') {
//       for(int i = 0; i < 26; i++) {
//         if (arr[i] != 0) {
//           printf("Char: %c Occurences: %d\n", i + 'a', arr[i]);
//         } 
//         arr[i] = 0;

//       }
//     }
//   }
// }


// #include <stdio.h>

// #define TRUE 1
// #define FALSE 0
// #define END -1

// int main() {
//   int c;
//   int arr[100] = { 0 };
//   int index = 0;
//   int counting = FALSE;

//   while ((c = getchar()) != EOF) {
//     if (c != ' ' && c != '\n') {
//       arr[index] += 1;
//       counting = TRUE;
//       putchar(c);
//    } else if ((c == ' ' || c == '\n') && counting == TRUE) {
//       printf(" | length: %d | ", arr[index]);
//       if(c == '\n') 
//         printf(" END\n");
//       else
//         counting = FALSE;

//       index += 1;
//    } 
//   }
// }

// #include <stdio.h>

// #define TRUE 1
// #define FALSE 0

// int main() {
//   int c;
//   int arr[100] = { 0 };
//   int index = 0;
//   int space = FALSE;

//   while ((c = getchar()) != EOF) {
//     if (c != ' ' && c != '\n' ) {
//       arr[index] += 1;
//       putchar(c);
//       space = FALSE;
//     } else if ((c == ' ' || c == '\n') && space == FALSE) {
//       printf(" | count: %d\n", arr[index]);
//       index += 1;
//       space = TRUE;
//     } 
//   }
// }

// #include <stdio.h>

// int main() {
//   int c, i, nwhite, nother;
//   nwhite = nother = 0;
//   int ndigit[10] = { 0 };

//   while((c = getchar()) != EOF) {
//     if (c >= '0' && c <= '9') {
//       ++ndigit[c - '0'];
//     } else if (c == ' ' || c == '\n' || c == '\t') {
//       ++nwhite;
//     } else {
//       ++nother;
//     }
//   }

//   printf("digists =");
//   for (int i = 0; i < 10; i++) {
//     printf(" %d", ndigit[i]);
//   }
//   printf(" white: %d other: %d", nwhite, nother);
// }








// #include <stdio.h>

// #define IN 1
// #define OUT 0

// int main() {
//   int c;
//   int space = OUT;

//   while((c = getchar()) != EOF) {
//     if(c == ' ' && space == OUT) {
//       c = '\n';
//       putchar(c);
//       space = IN;
//       continue;
//     } else if (c != ' ') {
//       putchar(c);
//       space = OUT;
//     }
//   }
// }



// #include <stdio.h>

// int main() {
//   int c = getchar();

//   while(c != EOF) {
//     if(c == '\t') {
//       c = '\\';
//       putchar(c);
//       c = getchar();
//       c = 't';
//     } else if (c == '\b') {
//       c = '\\';
//       putchar(c);
//       c = getchar();
//       c = 'b';
//     } else if (c == '\\') {
//       c = '\\';
//       putchar(c);
//       c = getchar();
//       c = '\\';
//     }
//     putchar(c);
//     c = getchar();
//   }
// }





// #include <stdio.h>

// int main() {
//   int c;
//   int spaces = 0;

//   while((c = getchar()) != EOF) {
//     if (c == ' ' && spaces == 0) {
//       spaces++;
//       putchar(c);
//     } else if (c == ' '){
//       spaces++;
//     } else {
//       spaces = 0;
//       putchar(c);
//     }
//   }
// }





// #include <stdio.h>

// int main() {
//   int c, new_lines, tabs, spaces;
//   new_lines = 0;
//   tabs = 0;
//   spaces = 0;

//   while((c = getchar()) != EOF) {
//     if(c == '\n') {
//       new_lines++;
//     } else if (c == '\t') {
//       tabs++;
//     } else if (c == ' ') {
//       spaces++;
//     }
//   }

//   printf("Spaces: %d, Tabs: %d, New Lines: %d \n", spaces, tabs, new_lines);

// }




// #include <stdio.h>

// #define LOWER_FAHR 0
// #define UPPER_FAHR 300


// int main() {
//   int c;
//   int counter = 0;
//   while((c = getchar()) != EOF) {
//     putchar(c);
//     printf("%d \nç", counter);
//     counter++;
//   }
// }



// int main () {
//   for(float farenheit = UPPER_FAHR; farenheit >= LOWER_FAHR; farenheit -= 20) {
//     float celsius = (farenheit - 32) * (5.0 / 9.0);
//     printf("%.0f\t %.2f\n", farenheit, celsius);
//   }

// }

// #include <stdio.h>

// int main() {
//   printf("hello, ");
//   printf("world");
//   printf("\c");
// }