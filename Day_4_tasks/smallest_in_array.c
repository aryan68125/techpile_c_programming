#include<stdio.h>
#include<stdlib.h>
int main(){
  //declare the dynamic array
  int*arr;
  int number_of_elements;
  printf("Enter the number of elements that you want to save in the array\n");
  scanf("%d",&number_of_elements);
  //initializing the dynamic array
  arr=(int*)malloc(number_of_elements*sizeof(int));
  if(arr==NULL){
    //if the memory allocation fails
    printf("The memory allocation to the array failed!\n");
    exit(0);
  }
  else{
    printf("Memeory allocation to the array is a success\n");
    for(int i=0;i<number_of_elements;i++)
      {
      arr[i]=i+1;
    }
    //entering the elements in the array
    for(int i=0;i<number_of_elements;i++){
      scanf("%d",&arr[i]);
    }
    //calculate the smallest element in the entire array
    printf("Finding the smallest element in the array\n");
    int smallest = 999999999;
    for(int i=0;i<number_of_elements;i++)
      {
      if(arr[i]<smallest){
        smallest=arr[i];
      }
    }
    printf("smallest element in the array = %d\n", smallest);
  }
}