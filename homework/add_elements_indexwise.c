#include<stdio.h>
#include<stdlib.h>
void sum_a_b(int *arr, int *brr, int size){
  int sum=0;
  printf("printing sum of elements indexwise from array a and b\n");
  for(int i=0;i<size;i++){
    sum = arr[i]+brr[i];
    printf("%d ",sum);
  }
  printf("\n");
}
void displayarray(int *arr, int *brr, int size){
  printf("printing array a\n");
  for(int i =0 ;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
  printf("printing array b\n");
  for(int i =0 ;i<size;i++){
    printf("%d ",brr[i]);
  }
  printf("\n");
}
int main()
{
    int *arr;
    int *brr;
    int size;
    printf("Enter the size of the array a and b\n");
    scanf("%d", &size);
    arr=(int*)malloc(size*sizeof(int));
    brr=(int*)malloc(size*sizeof(int));
    if(arr == NULL && brr == NULL){
      printf("MEmory allocation failed!\n");
      exit(0);
    }
    else{
      for(int i=0;i<size;i++){
        arr[i]=i+1;
        brr[i]=i+1;
      }
      
      printf("Enter the elements in array a\n");
      for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
      }
      printf("Enter the elements in the array b\n");
      for(int i=0;i<size;i++){
        scanf("%d",&brr[i]);
      }
      
      displayarray(arr, brr, size);
      sum_a_b(arr, brr, size);
    }
}