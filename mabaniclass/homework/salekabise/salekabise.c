#include<stdio.h>

int main()
{
    printf("sale miladi morede nazar ra vared konid: \n");
    int x;
    scanf("%d", &x);
    if((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
    {
            printf("sal %d yek sale kabise ast !!!", x);
        return 0;
    }
        printf("sal %d yek sal kabise nist !!!", x);
    return 0;
}