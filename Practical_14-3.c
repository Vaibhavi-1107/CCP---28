/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 19/8/24
TO PRINT DESIGN-3 */
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,n;
    char x;
    //this pattern is ABCD like char
    printf("Enter the value of n:");
    scanf("%d",&n);
        for(r=1;r<=n;r++)
    {
        for(c=1;c<=(n-r);c++)
        {
            printf("  ");
        }
        x='A';
        for(c=(n-r+1);c<=n;c++)
        {
            printf("%2c",x);
            //where 2c is specific space between two line
            x++;
        }
        x=x-2;
        for(c=1;c<=r-1;c++)
        {
            printf("%2c",x);
            x--;
        }
        printf("\n");
    }

    printf("\n24CE053_Vaibhavi");
}

