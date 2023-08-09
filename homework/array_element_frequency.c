#include<stdio.h>
#include<stdlib.h>
//find the frequency of an elementin the array
int main()
{
    int*arr;
    int size, number, count=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&size);
    arr=(int*)malloc(size*sizeof(int));
    if(arr == NULL){
      //if memory allocation failed!
      printf("Memory allocation failed!");
      exit(0);
    }
    else{
      //if the memory allocation success
      for(int i=0;i<size;i++){
        arr[i]=i+1;
      }
      
      //enter the elements in the array
      for(int i=0;i<size; i++){
        scanf("%d",&arr[i]);
      }
      
      //printing array elements
      for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
      }
      printf("\n");
      
      printf("Enter the number that you want to find the frequency of\n");
      scanf("%d",&number);
      for(int i = 0; i<size;i++){
        if(arr[i] == number){
          count++;
        }
      }
      printf("The number %d frequency in array is %d\n", number, count);
    }
}