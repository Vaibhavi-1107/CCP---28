/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 27/10/24
READ THE MARKS FOR THE 10 STUDENT  */
#include<stdio.h>
void main()
{
    int marks[10],i,dis=0,first=0,pass=0,fail=0;
    int *p;
    for(i=0;i<=9;i++,p++)
    {
        printf("Marks of %d student :",i+1);
        scanf("%d",p);
    }
    p=&marks[0];
    for(i=0;i<=9;i++,p++)
    {
        if(*p>=70)
        {
            dis++;
        }
        else if(*p>=60)
        {
            first++;
        }
        else if(*p>=40)
        {
            pass++;
        }
        else
        {
            fail++;
        }
    }
        printf("\nDistinction :%d",dis);
        printf("First :%d",first);
        printf("Pass :%d",pass);
        printf("Fail :%d",fail);
        printf("\n24CE053_Vaibhavi");
        return 0;
}
