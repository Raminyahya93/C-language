#include<stdio.h>
#include<string.h>

int main()
{
    char string1[50];
    scanf("%s", string1);
    puts(string1);
    char costring[50];
    scanf("%s", costring);
    puts(costring);
    int i = strlen(string1);
    int x = strlen(costring);
    int k , j;
    for( k =i, j=0 ; k <= i+x ; k++,j++)
    {
       string1[k] = costring[j];
    }
    string1[k]='\0';
    puts(string1);

    return 0;
}