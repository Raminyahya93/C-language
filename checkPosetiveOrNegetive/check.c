#include <stdio.h>
int main()
{
    int a[10],b[10],i,x,y;
    printf("adadhaye morde nazar ra vared konid.\n");
    for(i=0, x=0 , y=0; i<10 ; i++)
    {
        int temp;
        scanf("%d",&temp);
        if(temp>=0)
        {
            a[x]=temp;
            x++;
        }else
        {
            b[y]=temp;
            y++;
        }
    }
    for(i=0;i<x; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<y; i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}