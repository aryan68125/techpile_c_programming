#include<stdio.h>
#include <stdlib.h>
int main(){

  //entering the size of array in the run time
  int* arr;
  int n, i;
  printf("Enter number of elements:");
  scanf("%d",&n);
  printf("Entered number of elements: %d\arr", n);
  arr = (int*)malloc(n * sizeof(int));
  if (arr == NULL) {
    printf("Memory not allocated.\n");
    exit(0);
  }
    else {
    printf("Memory successfully allocated using malloc.\n");
    for (i = 0; i < n; ++i) {
      arr[i] = i + 1;
    }
    
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("Printing the array\n");
    for(int i=0;i<n;i++)
    {
      printf("%d\n",arr[i]);
    }
  }
}