#include<stdio.h>
#include<stdlib.h>
//This function calculates the sum of all the elements in the array
int arraysum(int*arr,int size);
int arraysum(int*arr, int size){
  int sum = 0;
  for(int i=0;i<size;i++){
    sum=sum+arr[i];
  }
  return sum;
}
//This function will display the array
void display(int*arr,int size){
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int main(){
  //array declaration
  int*arr;
  int size;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  //array initialization
  arr=(int*)malloc(size*sizeof(int));
  if(arr == NULL){
    //if memory allocation fails!
    printf("Memeory allocation to the array failed!\n");
    exit(0);
  }
  else{
    //If memory allocation suceeds!
    for(int i = 0; i<size;i++){
      arr[i]=i+1;
    }
    
    //enter the array elements
    printf("Enter the array elements\n");
    for(int i = 0; i<size; i++){
      scanf("%d",&arr[i]);
    }
    printf("\n");
    //display the array
    display(arr,size);
    
    //calculate the sum of all elements in the array
    int sum = arraysum(arr,size);
    printf("The sum of all the elements in the array = %d\n",sum);
  }
}