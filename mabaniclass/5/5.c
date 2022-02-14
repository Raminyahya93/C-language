#include<stdio.h>

int main()
{
    printf("adad mode nazar ra vaed konid\n");
    int x , i = 0;
    scanf("%d",&x);
    while (x>0)
    {
        int c = x % 2;
        if (c == 0)
        {
            i++;
        }
        x = x / 10;
        
    }
    printf("%d",i);
    
    return 0;
}