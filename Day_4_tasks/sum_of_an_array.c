#include<stdio.h>
#include<stdlib.h>
int main(){
  //declaring the dynamic array
  int*arr;
  int number_of_elements;
  printf("Enter the number of elements you want to store in the array\n");
  scanf("%d",&number_of_elements);
  //initializing the dynamic array using malloc
  arr=(int*)malloc(number_of_elements*sizeof(int));
  if(arr==NULL){
    //if the memory location failed to be allocated to the array
    printf("Memory allocation to the array failed\n");
    exit(0);
  }
  else{
    //if the memory allocation to the array is successfull
    printf("Memory allocation to the array is successfull\n");
    for(int i=0;i<number_of_elements;i++)
      {
      arr[i]=i+1;
    }
    
    //entering elements inside the array
    for(int i=0;i<number_of_elements;i++)
      {
      scanf("%d",&arr[i]);
    }
    
    //calculating the summission of every elements present inside the array
    printf("calculating the combined summision of all te elements in the array\n");
    int sum=0;
    for(int i = 0;i<number_of_elements;i++)
      {
      sum=sum+arr[i];
    }
    printf("sum of every element in the array = %d \n ",sum);
    
  }
}