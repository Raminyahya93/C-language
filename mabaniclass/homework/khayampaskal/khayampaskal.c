#include<stdio.h>

int main()
{
    printf("tedad radif morde nazar ra wared konid\n");
    int x , i = 1 ;
    scanf("%d", &x);
    while(i<=x)
    {
        int j = 1;
        while(j<=x-i)
        {
            printf(" ");
            j++;
        }
        int c = 1;
        while(c<=i)
        {
            printf("%d", c);
            c++;
        }
        int h = i;
        while(h>1)
        {
            printf("%d", h-1);
            h--;
        }
        printf("\n");
        i++;
    }
    return 0;
}