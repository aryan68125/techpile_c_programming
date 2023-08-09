//find the frequency of odd and even elements in the array
#include<stdio.h>
#include<stdlib.h>
int main(){
  //declaring array
  int*arr;
  int size,even=0,odd=0;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  //initializing array
  arr=(int*)malloc(size*sizeof(int));
  if(arr == NULL){
    printf("Memory allocation failed!");
    exit(0);
  }
  else{
    for(int i=0;i<size;i++){
      arr[i]=i+1;
    }
    printf("Enter the elements in the array\n");
    for(int i=0;i<size;i++)
      {
      scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++){
      if(arr[i]%2 == 0){
        even++;
      }
      else{
        odd++;
      }
    }
    printf("Printing the even elements frequency %d\n", even);
    printf("Printing the odd elements frequency %d\n",odd);
  }
}