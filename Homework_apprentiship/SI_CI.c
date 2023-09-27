#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float SI(float principal, float rate ,float time){
  float Simple_intrest = (principal * rate * time)/100;
  return Simple_intrest;
}
float CI(float principal, float rate ,float time){
  // principal * pow((1+rate/100), time) = Compund intrest
  float compund_Intrest = principal * pow((1+rate/100), time);
  return compund_Intrest;
}
int main(){
  float principal, rate, time;
  printf("Enter the principal amount\n");
  scanf("%f",&principal);
  printf("Enter the principal rate\n");
  scanf("%f",&rate);
  printf("Enter the principal time\n");
  scanf("%f",&time);
  
  float simple_intrest = SI(principal, rate, time);
  printf("Simple intrest = %.3f\n", simple_intrest);
  float compund_Intrest = CI(principal, rate, time);
  printf("Compund intrest = %.3f\n", compund_Intrest);
}