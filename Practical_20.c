/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 10/9/24
TO FIND AVERAGE MARKSOF A STUDENT */
#include<stdio.h>
#include<conio.h>
void message();
//no return type no parameter
int students();

// no parameter
void grade(int [],int);
// no return type
float avg(int[],int);
// with return type and parameter

void main()
{
    int no_students,i,G[50];
    float average;

    message();
    no_students=students();
    for(i=0;i<no_students;i++)
    {
        //display the grades
        printf("enter your grade : ");
        scanf("%d",&G[i]);
    }
    grade(G,no_students);
    //call avg. function
    average=avg(G,no_students);
    printf("The Average grade of students:%.3f\n",average);
    printf("\n24CE053_VAIBHAVI");
}
void message()
{
    printf("WELCOME TO CHARUSAT UNIVERSITY\n");
    //only print a message
    printf("==================================\n");

}
int students()
{
    int n;
    printf("Enter the no.of students:");
    //return a no. of students
    scanf("%d",&n);
    printf("----------------\n");
    return n;
}

void grade(int s[],int x)
//x=no. of students taken
//s=grade stored array
{
    int i;
    for(i=0;i<x;i++)
    {
        printf("Grade of (%d) student :%d\n",i+1,s[i]);
        //passing student grade as parameter
        printf("-----------------\n");

    }
}
float avg(int b[],int y)
//y for total student's grade
//b for stored average
{
    int i,w;
    float r;
    //w for avg grade
    for(i=0;i<y;i++)
    {
        w=w+b[i];
        //returns avg. marks of  students
    }
     r=(float) w/y;
     //r=avg.written

    return r;
}
