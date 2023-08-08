#include <stdio.h>
int main()
    {
//       int a = 50; compile time input
//       int b = 51;
    printf("Executing addition.c program *******>\n");
    
//    printf("Dealing with integer type values --->\n");
//    int a,b;
//       printf("Enter the first number \n");
//       scanf("%d", &a);
//       printf("Enter the second number \n");
//       scanf("%d", &b);
//       printf("%d + %d = %d\n", a,b,a+b);
       
       printf("Dealing with double values--->\n");
       double c,d;
       printf("Enter the first float values \n");
       scanf("%lf", &c);
       printf("Enter the second float value \n");
       scanf("%lf", &d);
       printf("%lf + %lf = %lf\n", c,d,c+d);
       return 0;
    }