#include<stdio.h>

int main()
{
     int i , j ;
     int a[4][5] , b[5][4];
      for(i=0 ; i <4 ; i++)
    {
        for(j=0; j < 5 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }    
     for(i=0 ; i <5 ; i++)
    {
        for(j=0; j < 4 ; j++)
        {
          b[i][j]= a[j][i];  
        }
    }    
    return 0;
}    