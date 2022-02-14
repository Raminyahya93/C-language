#include<stdio.h>

int main()
{
    printf("lotfan adad mordenazar khod ra baraye chek kardane bakhshpaziri bar 5 vared konid: \n");
    int x;
    scanf("%d", &x);
    int sum = x % 10;
    if(sum % 5 == 0)
    {
        printf("adad %d bar 5 bakhsh pazir ast !!!", x);
    }else
    {
        printf("adad %d bar 5 bakhsh pazir nist !!!", x);
    }
    return 0;
}