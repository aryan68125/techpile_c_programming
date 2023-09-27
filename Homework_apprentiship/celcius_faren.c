#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float celcius_to_farenheit(float celsius){
  float farenheit = (celsius * (9/5)) + 32;
  return farenheit;
}
int main(){
  printf("Enter the temperature in celcius\n");
  float celsius;
  scanf("%f",&celsius);
  
  float farenheit = celcius_to_farenheit(celsius);
  printf("celcius = %.3f ---> farenheit = %.3f \n \a",celsius, farenheit);
}