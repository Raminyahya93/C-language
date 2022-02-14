#include <stdio.h>
int main()
{
    int a[10],b[10] , count,r=1;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        int temp =a[i];
        for(count=0;a[i]>0;count++)
        {
            r = a[i] % 10;
            a[i]=a[i]/10;
        }
        a[i] = temp;
        b[i] = count;
    }
    for(int i = 0; i < 10; i++)
    {
        printf("tedad argham adad %d barabar %d ast\n", a[i], b[i]);
    }
    return 0;
}