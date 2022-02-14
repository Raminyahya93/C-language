#include<stdio.h>

void printarray(int arr[] , int size)
{
  for(int i = 0 ; i < size ; i++)
  {
      arr[i]++;
    printf("%d ", arr[i]);
  }
}

int main()
{
    int sliceseachmeal[] = {4, 5, 4, 6 , 3, 2};
    printarray(sliceseachmeal, 6);

    printf("\n");
    for(int i = 0 ; i < 6 ; i++)
    {
    printf("%d ", sliceseachmeal[i]);
    }
    return 0;
}