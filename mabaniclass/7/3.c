#include<stdio.h>

int main()
{
     int i , j , t;
     int a[5][6];
      for(i=0 ; i <5 ; i++)
    {
        for(j=0; j < 5 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }    
    for(i=0;j<6;j++)
    {
        t=a[2][j];
        a[2][j]=a[3][j];
        a[3][j]=t;
    }
      for(i=0 ; i <5 ; i++)
    {
        for(j=0; j < 5 ; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }    
    return 0;
}