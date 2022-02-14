#include<stdio.h>
#include<string.h>

int stringlenght(char x[50])
{
    int charcount;
    int i = 0;
     while (x[i] != '\0')
    {
        charcount ++;
        i++;
    }

    return  charcount;
}

int main()
{
    char string1[50];
    scanf("%s", string1);
    printf("\n%d", stringlenght(string1));

    return 0;
}