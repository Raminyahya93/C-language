#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isprime(int input)
{
        //ravesh az nazar riyaziyati esbat shode
        for(int i = sqrt(input); i > 1 ; i--)
        {
            if(input % i == 0)
            {
                return false;
            }
        }
        return true;
}
int main()
{
    int input[10];
    printf("adadhaye morde nazar ra vared konid\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &input[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        bool prime = isprime(input[i]);
        if(prime)
        {
            printf("adad %d aval ast !!!\n", input[i]);
        }else
        {
            printf("adad %d aval nist !!!\n", input[i]);
        }
    }
    return 0;
}