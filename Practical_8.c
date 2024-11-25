/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 25/7/24
TO DISPLAY MENU FOR ORDER */
#include<stdio.h>
#include<conio.h>
void main()
{
    int Burger,Pizza,Pasta,Sandwich,FrenchFries;
    int i,BillAmount;
    Burger=150;
    Pizza=200;
    Pasta=120;
    Sandwich=100;
    FrenchFries=80;

    x:printf("MENU\n\n");
      printf(" (1)BURGER............150Rs.\n (2)PIZZA.............200Rs.\n (3)PASTA.............120Rs.\n (4)SANDWICH..........100Rs.\n (5)FRENCH FRIES.......80Rs.\n");
      printf("\n\nEnter 1 for BURGER");
      printf("\nEnter 2 for PIZZA");
      printf("\nEnter 3 for PASTA");
      printf("\nEnter 4 for SANDWICH");
      printf("\nEnter 5 for FRENCH FRIES");
      printf("\nEnter 0 for no need more items");
      printf("\n\nEnter item no to order:");
      fflush(stdin);
      scanf("%d",&i);

      switch(i)
    {
            case 0:
            printf("Total amount of order:%d",BillAmount);
            break;
            //when customer press 0 number,he/she order will confirm
        case 1:
            BillAmount+=Burger;
               goto x;
               //goto for continue looping
        case 2:
            BillAmount+=Pizza;
               goto x;
        case 3:
            BillAmount+=Pasta;
               goto x;
        case 4:
            BillAmount+=Sandwich;
               goto x;
        case 5:
            BillAmount+=FrenchFries;
               goto x;

    }
    printf("\n24CE053_VAIBHAVI");
}
