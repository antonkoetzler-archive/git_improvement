// Author: Anton Louis Koetzler-Faust
// 2023

#include <stdio.h>
#include "add_two_numbers.c"
#include "subtract_two_numbers.c"
#include "multiply_two_numbers.c"

int main() {
  printf("This is my C++ program, please don't hack it :(\n");
  printf("This is the result of 1 + 2: %d\n", addTwoNumbers(1, 2));
  printf("This is the result of 1 - 2: %d\n", subtractTwoNumbers(1, 2));
  printf("This is the result of 1 * 2: %d\n", multiplyTwoNumbers(1, 2));
  return 0;
}
