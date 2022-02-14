#include<stdio.h>

int main()
{
    printf("How many pizza slices you eat ???");
    int slices ;
    scanf("%d", &slices);
    int caloriesperslice = 250;

    switch (slices)
    {
        case 1:
            printf("you did a grate job !");
            break;
        case 2:
            printf("you did ok job!");
            break;
        case 3:
            printf("you dida bad job! try to eat 2 next time");
            break;
        case 4:
            printf("you're a dissapointment");
            break;
        default:
            printf("enjoye your heart disease");
            break;
    }
    printf("you had %d calories.\n", caloriesperslice * slices);    
    return 0;
}