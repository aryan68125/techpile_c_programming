#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void check(char ch){
  switch(ch){
    case 'a': printf("a is a vowel\n");
    break;
    case 'e': printf("e is a vowel\n");
    break;
    case 'i': printf("i is a vowel\n");
    break;
    case 'o': printf("o is a vowel\n");
    break;
    case 'u': printf("u is a vowel\n");
    break;
    case 'A': printf("A is a vowel\n");
      break;
    case 'E': printf("E is a vowel\n");
      break;
    case 'I': printf("I is a vowel\n");
      break;
    case 'O': printf("O is a vowel\n");
      break;
    case 'U': printf("U is a vowel\n");
      break;
      default: printf("%c is a consonant\n",ch);
  }
}
int main(){
  printf("enter an alphabet \n");
  char a;
  scanf("%c",&a);
  
  check(a);
}