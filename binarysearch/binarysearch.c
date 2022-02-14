#include<stdio.h>

int main()
{
    printf("adadhaye morde nazar ra vared konid\n");
    int i , a[15];
    for(i=0;i<15;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("adad mode nazar ra vared konid\n");
    int x;
    scanf("%d",&x);
    int low=0 , high=14;
    int r=0;
    while(low<=high)
    {
        int mid =(high+low)/2;
        if(a[mid]==x)
        {
            printf("mojod dar a[%d]",mid);
            r++;
        }
        if(a[mid]>x)
        {
            high=mid-1;
        }else
        {
            low=mid+1;
        }
        

    }
    printf("%d",r);
    if(r==0)
    {
    printf("mojod nist");
    }
    return 0;
}