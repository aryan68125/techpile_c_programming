#include<stdio.h>
int main()
{
    printf("This program shows the greates in the array\n");
    int arr[100];
    int no_of_elements;
    printf("Enter the number of elements to be stored in an array the number of elements must be below 100\n");
    scanf("%d",&no_of_elements);
    for(int i=0; i<no_of_elements;i++)
      {
       scanf("%d",&arr[i]);
    }
    for(int j=0;j<no_of_elements;j++)
      {
      printf("%d ",arr[j]);
    }
    printf("\n");
    int max = arr[0];
    for(int j=0;j<no_of_elements;j++)
      {
        if(max<arr[j])
          {
          max=arr[j];
        }
    }
    printf("greatest number in array is %d\n", max);
}