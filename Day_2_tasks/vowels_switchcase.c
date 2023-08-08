#include<stdio.h>
int main(){
  printf("Enter the character to check if it is vowel or not \n");
  char ch;
  scanf("%c",&ch);
  switch(ch)
  {
  case 'A':
    printf("%c is a vowel \n",ch);
    break;
  case 'E':
    printf("%c is a vowel \n",ch);
    break;
  case 'I':
    printf("%c is a vowel \n",ch);
    break;
  case 'O':
    printf("%c is a vowel \n",ch);
    break;
  case 'U':
    printf("%c is a vowel \n",ch);
    break;
  case 'a':
    printf("%c is a vowel \n",ch);
    break;
  case 'e':
    printf("%c is a vowel \n",ch);
    break;
  case 'i':
    printf("%c is a vowel \n",ch);
    break;
  case 'o':
    printf("%c is a vowel \n",ch);
    break;
  case 'u':
    printf("%c is a vowel \n",ch);
    break;
  default:
    printf("%c is a consonant \n",ch);
  }
}