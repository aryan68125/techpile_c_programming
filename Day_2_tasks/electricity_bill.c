#include<stdio.h>
int main()
{
 printf("Enter the number of units consumed by the house owner\n");
 int units;
 scanf("%d",&units);
 float payment;
 if (units<=199)
   {
   payment=1.20*units;
 }
 else if(200<=units && units <400)
   {
   payment=1.50*units;
 }
 else if(400<=units && units <600)
   {
   payment=1.80*units;
 }
 else
 {
   payment=2*units;
 }
 printf("the electricity bill is %f",payment);
}