#include<stdio.h>
int main()
{
    int rupees, remainder;
    printf("Enter the rupees\n");
    scanf("%d",&rupees);
    int five_hundred = rupees/500;
    remainder = rupees%500;
    int two_hundred = remainder/200;
    remainder=remainder%200;
    int one_hundred = remainder/100;
    remainder=remainder%100;
    int fifty=remainder/50;
    remainder=remainder%50;
    int twenty=remainder/20;
    remainder=remainder%20;
    int ten=remainder/10;
    remainder=remainder%10;
    printf("five hundred = %d ,two hundred = %d, one hundred = %d, fifty = %d, twenty = %d, ten = %d",five_hundred,two_hundred,one_hundred,fifty,twenty,ten);
}