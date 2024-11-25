/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 29/7/24
SECOND COUNTDOWN*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,s;
    printf("Enter Second:");
    scanf("%d",&s);
    for (i=s;i>=0;i--)
    {
        printf("countdown %d \r",i);
        sleep(i);
        //sleep use it to bring a second to its same location
    }
    printf("Countdown Completed");
    printf("\n24CE053_Vaibhavi");
}
