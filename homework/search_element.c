#include<stdio.h>
#include<stdlib.h>
int search(int*arr,int size,int number);
//This function is enters the array elements
void inputelement(int *arr,int size){
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
}
void displayarray(int*arr, int size){
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int search(int*arr, int size, int number){
  for(int i=0;i<size;i++){
    if(arr[i] == number){
      return i;
    }
  }
  return 0;
}
int main(){
  int *arr;//declaration of array
  int size;
  int number; //the number to be searched in the array
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  //initialization of array
  arr=(int*)malloc(size*sizeof(int));
  if(arr == NULL){
    //if memory allocation fails!
    printf("memory allocation failed!");
    exit(0);
  }
  else{
    //if memory allocation is a success
    for(int i = 0 ;i<size;i++){
      arr[i]=i+1;
    }
    
    printf("Enter the elements inside the array\n");
    inputelement(arr,size);
    
    printf("Enter the number you want to search in the array\n");
    scanf("%d", &number);
    
    printf("Printing the array elements\n");
    displayarray(arr,size);
    
    printf("Printing the location of the element in the array\n");
    if(search(arr, size, number) != 0){
      //return_value[0] the number that was searched
      //return_value[1] the index value of the element
      int return_value = search(arr, size, number);
      printf("the %d is in %d position in the array\n", number,return_value);
    }
    else{
      printf("The %d is not present inside the array\n",number);
    }
  }
}