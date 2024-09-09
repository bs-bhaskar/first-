#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    /*
    0--->snake
    1--->water
    2--->gun
    */
    printf("choose 0 for snake,1 for water,2 for gun\n");
    printf("you ");
    scanf("%d", &player);
    printf("computer %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("it is drawn!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("you win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("you loss!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("you loss!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("it is drawn!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("you win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("you win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("you loss!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("it is drawn!\n");
    }
    else
    {
        printf("somthing went wrong!\n");
    }

    return 0;
}