/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 10/9/24
STRING COMPARISON */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,L1=0,L2=0;
    char n1[50],n2[50];
    printf("Enter the first note:");
        gets(n1);
    printf("Enter the second note:");
        gets(n2);
    //gets for white space

    for(i=0;n1[i]!='\0';i++)
    {
        L1++;
    }
    printf("First length:%d",L1);

    for(j=0;n2[j]!='\0';j++)
    {
        L2++;
    }
    printf("\nSecond length:%d",L2);

    for(i=0,j=0;i=L1-1,j=L2-1;i++,j++)
    {
        if(L1==L2)
        {
            printf("\nLength are same");
                if(n1[i]==n2[j])
                {
                    printf("\nCharacter are same");
                    break;
                }
                else
                {
                    printf("\nCharacter are not same");
                    break;
                }
        }
            else
            {
                printf("\nLength are not same");
                break;
            }
    }
    printf("\n24CE053_Vaibhavi");
}
