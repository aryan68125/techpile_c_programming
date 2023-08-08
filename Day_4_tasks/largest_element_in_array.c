#include<stdio.h>
#include<stdlib.h>
int main()
{
 //declaring the dynamic array
 int*arr;
 int number_of_elements;
 printf("Enter the number of elements you want to save in the array\n");
 scanf("%d",&number_of_elements);
 //initializing the dynamic array
 arr = (int*)malloc(number_of_elements*sizeof(int));
 if(arr==NULL){
   //if memory of the dynamic array failed to allocate
   printf("Failed to allocate memory to the array\n");
   exit(0);
 }
 else{
   //if memory allocation to the dynamic array is successfull
   printf("Memory allocation to the array is a success\n");
   for(int i=0;i<number_of_elements;i++)
     {
     arr[i]=i+1;
   }
   
   //enter the elements inside the array
   printf("Enter the elements inside the array\n");
   for(int i =0; i<number_of_elements;i++)
     {
     scanf("%d",&arr[i]);
   }
   printf("Finding the largest element in the array\n");
   int largest=0;
   for(int i=0;i<number_of_elements;i++)
     {
     if(arr[i]>largest){
       largest=arr[i];
     }
   }
   printf("The largest element in the array is = %d\n",largest);
 }
}