#include<stdio.h>

int main()
{
    int s= 5;
    int mygrades[s];
    mygrades[0]=10;
    mygrades[1]=15;
    mygrades[2]=20;
    mygrades[3]=25;
    mygrades[4]=30;

    for(int i = 0; i<s ;i++)
    {
        printf("%d ",mygrades[i]);
    }

    return 0;
}