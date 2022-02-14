#include<stdio.h>

int main()
{
     int a[5][5];
     int i , j ,f = 1;
      for(i=0 ; i <5 ; i++)
    {
        for(j=0; j < 5 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }    
        for(i=0;i<5;i++)
        {
            f = f*a[i][4-i];
        }
    
    printf(" zarb = %d",f);
    return 0;
}