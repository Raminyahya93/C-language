#include<stdio.h>

int main()
{
    int number = 232323;
    int i = 0;
    while (1)
    {
        printf("%d ", i);
        if(i == number)
        {
            printf("we ount it!!!");
            break;
        }
        i++;
    }
    
    return 0;
}