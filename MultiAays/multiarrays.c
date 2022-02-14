#include<stdio.h>

void printarray(int arr[] , int size)
{
  for(int i = 0 ; i < size ; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main()
{
    int const columns = 3;
    int const rows=2;
    int grades[2][3] = {
      {12, 23, 45},{64, 78, 89}
    };
    for(int i = 0 ; i < rows ; i++)
    {
      printarray(grades[i], columns);
      printf("\n");
      /*for(int j = 0 ; j < 3 ; j ++)
      {
        printf("%d ", grades[i][j]);
      }
      printf("\n");*/  
    }
    return 0;
}