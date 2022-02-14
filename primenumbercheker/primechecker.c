#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isprime(int input)
{
        
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
    int input;
    scanf("%d", &input);

    for(int i = input;i>1; i--)
    {
        bool prime = isprime(i);
        
        if(prime)
        {
            printf("%d Is prime\n" ,i);
        }
    }
    return 0;
}