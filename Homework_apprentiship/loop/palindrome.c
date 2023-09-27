#include <stdio.h>

int main() {

  int n, reverse = 0, digits;

  printf("Enter an integer: \n");
  scanf("%d", &n);
  int temp = 0;
  temp =n;
  
  while (n != 0) {
    digits = n % 10;
    reverse = reverse * 10 + digits;
    n /= 10;
  }

  printf("Reversed number = %d\n", reverse);

  if(reverse == temp)
    {
    printf("%d is plindrome\n",temp);
  }
  else{
    printf("%d is not a palindrome\n", temp);
  }
}
