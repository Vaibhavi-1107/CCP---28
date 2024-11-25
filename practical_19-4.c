/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 10/9/24
STRING COPYING */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,l=0;
    char n1[50],n2[50];
    printf("Enter the note:");
    gets(n1);
    //gets for white space
    for(i=0;n1[i]!='\0';i++)
    {
        l++;
    }
    for(j=0;j<=l;j++)
    {
        n2[j]=n1[j];
    }
    n2[j]='\0';
    printf("\nCopy String:%s",n2);
    printf("\n24CE053_Vaibhavi");
}
