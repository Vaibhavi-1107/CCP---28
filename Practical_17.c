/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 7/9/24
SEATING ARRANGEMENT */
#include<stdio.h>
#include<conio.h>
void main()
{
    int rs,x,r,c;
    //rs for asking no of seat
    //r for row
    //c for columns
    //i & j for input Row and Columns
    char seat[10][10];
     for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {

            seat[i][j]='O';

        }

    }
    printf("Enter the number of reserved seats:");
    scanf("%d",&rs);

   for(x=0;x<rs;x++)
    {
        printf("Enter row and seat %d number for reserved seat:",x+1);
        scanf("%d %d",&r,&c);
       seat[r-1][c-1]='X';
    }
    printf("\n\n");

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {

                printf("%c ",seat[i][j]);

        }
        printf("\n");
    }

    printf("\n24CE053_Vaibhavi");
}
