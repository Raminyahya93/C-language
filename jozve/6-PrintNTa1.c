#include<stdio.h>

int reverse(int x)
{
    for(int i=x;i>0;i--)
    {
        printf("%d ", i);
    }
}
int main()
{
    printf("adad morede nazar ra baraye shomareshe maxos vared konid\n");
    int a;
    scanf("%d", &a);
    reverse(a);
    return 0;
}