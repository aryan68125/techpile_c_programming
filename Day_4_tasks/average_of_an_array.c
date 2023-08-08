#include<stdio.h>
#include<stdlib.h>
int main()
{
//declaring the dynamic array
int * arr;
int number_of_elements;
printf("Enter the number of elements you want to save in the array\n");
scanf("%d",&number_of_elements);
//initializing the dynamic array
arr=(int*)malloc(number_of_elements*sizeof(int));
if(arr == NULL)
{
  //if memory for the dynamic array failed to allocate
  printf("The memory allocation failed for the array\n");
  exit(0);
}
else{
  //if the memory allocation of the array succeeds
  printf("The memory allocation succeeds for the array\n ");
  for(int i=0;i<number_of_elements;i++)
    {
    arr[i]=i+1;
  }
  
  //entering the array elements in the array
  printf("Enter the array elements in the array\n");
  for(int i=0;i<number_of_elements;i++)
    {
    scanf("%d",&arr[i]);
  }
  
  //calculate the average of all the elements in the array
  printf("Calculating the average for all the elements in the array\n");
  int average,sum=0;
  for(int i=0;i<number_of_elements;i++)
    {
    sum = sum+arr[i];
  }
  average=sum/number_of_elements;
  printf("Average of all the elements in the array = %d\n", average);
}
}