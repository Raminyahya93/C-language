#include<stdio.h>

int exchange(int a , int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d\n%d", a ,b);
}

int main()
{
    printf("adad haye morde nazar khod ra vared konid\n");
    int x ,y;
    scanf("%d%d",&x,&y);
    exchange(x,y);
return 0;
}