#include<stdio.h>

int checkzoje(int x)
{
    int q;
    q = x % 2;
    if(q == 0)
    {
        return 0;
    }else{
        return 1;
    }
}

int main()
{
    printf("adad morde nazar ra vared konid\n");
    int s;
    scanf("%d", &s);
    int a = checkzoje(s);
    if(a == 0)
    {
        printf("adad morde nazar zoje ast!!!");
    }else{
        printf("adad morde nazar fard ast!!!");
    }
    return 0;
}