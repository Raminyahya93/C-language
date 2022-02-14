#include<stdio.h>
#include<string.h>

int main()
{
    printf("what is your favorite food?: ");
    char favfood[50];
    scanf("%49s", favfood);
    printf("%s\n", favfood);

    int charcount = 0  ;
    int Charcount = strlen(favfood);
    while (favfood[charcount] != '\0')
    {
        charcount ++;
    }
    printf("the charcter count is %d\n", charcount);
    printf("%d", Charcount);
    return 0 ;
}