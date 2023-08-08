#include<stdio.h>
int main()
{
  printf("This program calculates the total percentage of marks entered\n");
  int arr[100];
  int no_of_elements;
  printf("Enter the number of subjects marks to be stored in an array the number of subjects must be below 100\n");
  scanf("%d",&no_of_elements);
  for(int i=0; i<no_of_elements;i++)
      {
    scanf("%d",&arr[i]);
  }
  printf("Displaying the number of subjects marks entered in the array\n");
  for(int j=0;j<no_of_elements;j++)
      {
    printf("%d ",arr[j]);
  }
  printf("\n");
  float sum=0;
  float count=0;
  for(int j=0;j<no_of_elements;j++)
      {
    sum=sum+arr[j];
    count++;
  }
  float divide = sum/(100*count);
  float percentage = (divide)*100;
  printf("Total percentage of all the subjects is %f\n", percentage);
}