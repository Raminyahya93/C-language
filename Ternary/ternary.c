#include <stdio.h>

int main()
{
    double money = 20;
    double cost = 25;

    money > cost ? printf("you can afford it!\n") : printf("sorry bro ... you need %lf more moneyz\n", cost - money);
    /*
    if(money > cost)
    {
        printf("you can afford it!\n");
    }else
    {
        printf("sorry bro ... you need %lf more moneyz\n", cost - money);
    }
    */
    return 0;
}