#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>



/** Exercise 4.3* Reverse Polish Calculator
 * The excercises for this one was a bit complicated/ambigious
 * so I decided to implement my own rev polish calculator
 * using a bit different kind of logic than the example in K&R
 *  **/
#define NUMBER 1

int get_next(char next) {

  if (next == ' ') {
    return ' ';
  }

  if (isdigit(next)) {
    return NUMBER;
  }

  return next;
}

int pop_off_stack(int stack[], int *counter) {
  int popped_value = stack[*counter-1];
  stack[*counter-1] = 0;
  *counter -= 1;

  return popped_value;
}

void push_to_stack(int stack[], int value, int *counter) {
  stack[*counter] = value; 
  *counter += 1;
}

void rev_polish_calc(char string_to_calc[]) {
  int length = strlen(string_to_calc);
  int stack[100] = {0};
  int stack_counter = 0;

  for (int i = 0; i < length; i++) {
    switch(get_next(string_to_calc[i])) {
      case ' ': {
        break;
      } case NUMBER: {
        int next_number = 0;
        while(get_next(string_to_calc[i]) == NUMBER) {
          next_number = (next_number * 10) + string_to_calc[i] - '0';
          i++;
        }
        push_to_stack(stack, next_number, &stack_counter);
        break;
      } case '+': {
        int sum = pop_off_stack(stack, &stack_counter) + pop_off_stack(stack, &stack_counter);
        stack[stack_counter] = sum;
        stack_counter++;

        break;
      } case '*': {
        int product = pop_off_stack(stack, &stack_counter) * pop_off_stack(stack, &stack_counter);
        stack[stack_counter] = product;
        stack_counter++;

        break;
      } case '-' : {
        int second_val = pop_off_stack(stack, &stack_counter);
        int difference = pop_off_stack(stack, &stack_counter) - second_val;
        stack[stack_counter] = difference;
        stack_counter++;

        break;
      } case '/': {
        int second_val = pop_off_stack(stack, &stack_counter);
        int quotient = pop_off_stack(stack, &stack_counter) / second_val;
        stack[stack_counter] = quotient;
        stack_counter++;

        break;
      } case '%': {
        int second_val = pop_off_stack(stack, &stack_counter);
        int remainder = pop_off_stack(stack, &stack_counter) % second_val;
        stack[stack_counter] = remainder;
        stack_counter++;

        break;
      }

    }
  }

  for (int i = 0; i < stack_counter; i++) {
    printf("%d", stack[i]);
  }


}

int main() {
  char string_to_calc[] = "5 4 * 3 2 % +";

  rev_polish_calc(string_to_calc);

}



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