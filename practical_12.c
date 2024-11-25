/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 9/8/24
TO PRINT TOTAL BUDGET OF FUNCTION */
#include<stdio.h>
#include<conio.h>
void main()
{
    int Total_budget=0,i;
    //even no of days

    printf("Each even day cost is 200 Rs.");
    for(i=0;i<100;i+=2)
    {
        Total_budget=Total_budget+200;
    }
    printf("\nTotal budget of function: %d",Total_budget);
    printf("\n24CE053_Vaibhavi");
}
