/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 2/8/24
TO GENERATE A MATCHSTICK GAME */
#include<stdio.h>
#include<conio.h>
void main()
{
    int user_pick,comp_pick,matchsticks=21;
    //Matchstick game information
    printf("WELCOME TO THE MATCHSTICK GAME:\n");
    printf("Rules:\n You can pick 1, 2, 3, or 4 matchsticks in each turn.\n");
    printf(" The player forced to pick the last matchstick loses the game.\n");
    printf(" AFTER THE USER PICKS,THE COMP MAKES ITS PICK\n\n");

    while(1)
    {
        printf("Enter a num between 1 to 4:");
        scanf("%d",&user_pick);
        if(user_pick<1 || user_pick>=5)
        {
            printf("Invalid!\n");
            continue;
        }
        matchsticks-=user_pick;
        printf("Left Matchsticks:%d\n",matchsticks);
        comp_pick=5-user_pick;
        matchsticks-=comp_pick;
        printf("computer choose the sticks:%d\n",comp_pick);
        printf("now total:%d\n\n",matchsticks);


        if(matchsticks == 1)
        {
            printf("Computer wins the game:\n\n");
            break;
        }
    }
    printf("\n24CE053_Vaibhavi");
}
