#include<stdio.h>

int main()
{
    int sllies = 20;
    int *p = &sllies;

    printf("slices: %d\n", sllies);
    printf("slices (throght pointer): %d \n", *p);

    sllies = 21;

    printf("slices: %d\n", sllies);
    printf("slices (throght pointer): %d \n", *p);

    *p = 25; 

    printf("slices: %d\n", sllies);
    printf("slices (throght pointer): %d \n", *p);

    sllies++;

    // *p --> *(p++)
    (*p)++;

    printf("slices: %d\n", sllies);
    printf("slices (throght pointer): %d \n", *p);

    return 0;
}