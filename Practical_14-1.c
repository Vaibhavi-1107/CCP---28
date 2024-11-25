/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 19/8/24
TO PRINT DESIGN-1 */
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(c%2==0)
            {
                printf("%3d",0);
                //where 3d is specific space
            }
            else
            {
                printf("%3d",1);
            }
        }
        printf("\n");
    }
    printf("\n24CE053_Vaibhavi");
}
