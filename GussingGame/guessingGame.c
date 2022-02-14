//the user has to guess a number from 0 - 5.
//output whether or not the person is corect

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  //generate a random number
  //psuedu random number
    //psedudo random number genarator
    //this gets seeded
    //output a result
    //seed - from the clock

    int maxvaliue = 5;
    srand(time(NULL));
    int randomnumber = rand() % maxvaliue+1;
    printf("%d\n", randomnumber);
    printf("guss a number 0 - %d\n", maxvaliue );
    int input;
    scanf("%d", &input);
    if(input == randomnumber)
    {
        printf("you win!\n");
    } else
    {
        printf("you dont't win! try again!\n");
    }
    printf("thank you for playing");
    return 0;
}