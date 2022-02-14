// 1. add a patint
// 2. view a pation
// 3. search patient
// 4.exit
#include <stdio.h>

int main()
{
    printf("choose a menu 1 - 4 \n");
    printf("1. add a patient\n");
    printf("2. search patient\n");
    printf("3. search patients\n");
    printf("4. exit\n");

    int input;
    scanf("%d", &input);

    if (input == 1)
    {
        printf("adding a patient\n");
    }
    else if (input == 2)
    {
        printf("viewing a patient");
    }
    else if (input == 3)
    {
        printf("searching a patient");
    }
    else if (input == 4)
    {
        printf("exitng...\n");
        printf("do you want to save??? Y/N\n");
        char q;

        getchar();

        scanf("%c", &q);
        if (q == 'Y' || q == 'y')
        {
            printf("saving changes !\n");
        }
        else if (q == 'N' || q == 'n')
        {
            printf("fine whatever\n");
        }
        else
        {
            printf("Haxing deteted self destructing in 5....4....3....2....1....BOOM\n");
        }
    }
    else
    {
        printf("inccorect input");
    }
    return 0;
}