/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 16/8/24
DISPLAY MULTIPLICATION TABLE */
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,R,C;
    /*where R and C ares vlaue of Rows which taken by from users
    */
    printf("Enter the number of R:");
    scanf("%d",&R);
    printf("Enter the number of C:");
    scanf("%d",&C);

    for(r=1;r<=R;r++)
    {
        for(c=1;c<=C;c++)
        {
            printf("%5d",r*c);
        }
        printf("\n");
    }
    printf("\n24CE053_Vaibhavi");
}
