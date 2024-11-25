/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 7/9/24
PRINT NAMES IN ALPHABETICAL ORDER */
#include<stdio.h>
#include<conio.h>
void main()
{
    int no_students,i,j;
    char N[50][50],t[25];

    printf("Enter The no. of student:");
    scanf("%d",&no_students);

    for(i=0;i<no_students;i++)
    {
        printf("Enter the %d student name:",i+1);
        scanf("%s",N[i]);
    }

    for(i=0;i<(no_students-1);i++)
    {
        for(j=i+1;j<no_students;j++)
        {
            if(strcmp(N[i],N[j])>0)
            {
                strcpy(t,N[i]);
                strcpy (N[i],N[j]);
                strcpy (N[j],t);
            }
        }
    }
    printf(" \n\nIn alphabetical order student name\n");


    for(i=0;i<no_students;i++)
    {
        printf("%d student name:%s \n",i+1,N[i]);
    }
    printf("\n24CE053_Vaibhavi");
}
