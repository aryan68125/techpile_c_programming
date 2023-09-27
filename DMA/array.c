#include<stdio.h>
#include<stdlib.h>
void EnterElement(int *arr, int i, int size){
  if(i==size){
    return;
  }
  scanf("%d",&arr[i]);
  EnterElement(arr,i+1,size);
}
void displayArray(int *arr,int i, int size){
  if(i==size){
    return;
  }
  printf("%d ",arr[i]);
  displayArray(arr,i+1,size);
}
int sum(int *arr,int sum, int i, int size){
  if(i==size){
    return sum;
  }
  sum+=arr[i];
  return sum(arr,sum,i+1, size);
}
int main(){
  int *arr;
  int size;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  arr = (int*)malloc(size*sizeof(int));
  
  if(arr==NULL){
    printf("Memory allocation failed\n");
    exit(0);
  }
  else{
    for(int i=0;i<size;i++){
      arr[i] = i+1;
    }
    printf("Enter all numbers\n");
    EnterElement(arr,0,size);
    
    printf("Display Array\n");
    displayArray(arr,0,size);
    
    printf("sum of array elements\n");
    int sumOfElements = sum(arr,0,0,size);
    printf("The sum of all elements in the array\n");
  }
}