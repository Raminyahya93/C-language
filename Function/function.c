#include<stdio.h>

int factoriall(int number)
{
    int factoriall = 1;
    for(int i = number ; i > 1 ; i--)
    {
        factoriall *= i;
    }

    return factoriall;
}

void outputfactorial(int input)
{
    printf("teh factorial of %d is %d. \n", input , factoriall(input));
}


int main()
{
    outputfactorial(5);
    outputfactorial(8);

    for(int i = 0 ; i <= 10 ; i++)
    {
        outputfactorial(i); 
    }
/*  int fack = factoriall(5);
    printf("%d\n", fack);
    printf("%d\n", factoriall(8));
    printf("%d", factoriall(factoriall(3)));
*/
    return 0 ;
}