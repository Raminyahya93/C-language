#include<stdint.h>

int main()
{
    char string1[50];
    char stringreplace[50];
    scanf("%s", string1);

    for(int i = 0 ; string1[i]!='\0'; i++)
    {
        stringreplace[i]= string1[i];
    }
    stringreplace[i]='\0';
    return 0;
}