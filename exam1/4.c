#include<stdio.h>

int checkreshte(char l , char k)
{
    if(l > k)
    {
        return -1;
    }
    if(l < k)
    {
        return +1;
    }
    if(l == k)
    {
        return 0;
    }
}

int main()
{
    char a[50],b[50];
    int c;
    scanf("%s %s", a, b);
    for (int i ; a[i] != '\0'; i++)
    {
        c = checkreshte(a[i], b[i]);
        if(c != 0);
        {
            printf("%d" , c);
            return 0;
        }
    }
    printf("%d",c);
    return 0;
}