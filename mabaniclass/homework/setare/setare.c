#include<stdio.h>

int main()
{
    int i = 1;
    while(i<=4)
    {
        int j = 1 ;
        while(j <= 4 - i)
        {
            printf(" ");
            j++;
        }
        int k = 1 ;
        while(k <= i)
        {
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }    
    return 0;
}