/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 10/9/24
REVERSE TO A STRING  */
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
    for(i=(l-1),j=0;i>=0;i--,j++)
    {
        n2[j]=n1[i];
    }
    n2[j]='\0';
    printf("\nReverse String:%s",n2);
    printf("\n24CE053_Vaibhavi");
}
