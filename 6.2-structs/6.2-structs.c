#include<stdio.h>
typedef struct rectangle//(optional)
{
    int lenght;
    int width;
}rectangle;

typedef struct position
{
    int x;
    int y;
}position;


typedef struct buldingplan
{
    char owner[30];
    rectangle rectangle;
    position position;
}buldingplan;

int main()
{
    rectangle myrectangle = {5, 10};
    printf(" lenght : %d. wight: %d\n", myrectangle.lenght, myrectangle.width);
    buldingplan myhose = {"ramin yahya", {5, 10}, { 32 , 48}};
    printf("the hose at %d %d (size %d %d) is owened by %s\n",
        myhose.position.x,
        myhose.position.y,
        myhose.rectangle.lenght,
        myhose.rectangle.width,
        myhose.owner
    );

    int size = 3;
    position path[] = {{0, 1}, {1, 2}, {3, 4}};

    for(int i = 0; i < size ; i++)
    {
        printf("%d %d\n", path[i].x, path[i].y);
    }
    buldingplan *structponter = &myhose;
   printf("position x: %d\n", structponter->position.x);  
    return 0;
}