#include<stdio.h>
int main()
{
  int side1,side2,side3;
     printf("Enter the length of side 1 of tringle\n");
     scanf("%d",&side1);
     printf("Enter the length of side 2 of tringle\n");
     scanf("%d",&side2);
     printf("Enter the length of side 3 of tringle\n");
     scanf("%d",&side3);
     if(side1 == side2 && side2==side3 && side3==side1)
     {
       printf("The triangle is equilateral triangle\n");
     }
     else if(side1 == side2 || side2==side3 || side3==side1)
{
       printf("The triangle is isoceles triangle\n");
     }
     else
{
       printf("The triangle is scalene triangle");
     }
}