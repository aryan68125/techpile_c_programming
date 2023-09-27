#include<stdio.h>
#include<stdlib.h>
void EnterElement(int *arr,int size){
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
}
void DisplayArray(int *arr, int size){
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
float Average(int *arr,int size){
  float average,sum=0;
  for(int i=0;i<size;i++){
    sum+=arr[i];
  }
  average = (float)sum/(float)(size);
  return average;
}
int main(){
  printf("Enter the size of the array\n");
  int size ;
  scanf("%d",&size);
  int *arr;
  arr=(int*)malloc(size*sizeof(int));
  
  //check if the memory is allocated to the array or not
  if(arr==NULL){
    printf("Memory allocation to the array failed\n");
    exit(0);
  }
  else{
    //if memory allocation of the array is successfull
    printf("Memory allocation to the array is successful\n");
    for(int i=0;i<size;i++){
      arr[i]=i+1;
    }
    
    EnterElement(arr,size);
    DisplayArray(arr,size);
    
    float average = Average(arr,size);
    printf("The average of elements in the array is : %.3f",average);
  }
}