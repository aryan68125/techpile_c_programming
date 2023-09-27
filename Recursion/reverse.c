#include <stdio.h>

// Function to reverse a number recursively
int reverseNumber(int num, int rev) {
  // Base case: When there are no more digits left to reverse
  if (num == 0) {
    return rev;
  } else {
    // Extract the last digit of the number
    int lastDigit = num % 10;
    // Append the last digit to the reversed number
    rev = rev * 10 + lastDigit;
    // Recursively reverse the remaining digits
    return reverseNumber(num / 10, rev);
  }
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  int reversed = reverseNumber(num, 0);

  printf("Reversed number: %d\n", reversed);

  return 0;
}
