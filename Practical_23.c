/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 19/10/24
TO PRINT FIBONACCI SERIES WITH RECURSION  */
#include<stdio.h>
#include<conio.h>
int fibo(int n);
void main()
{
    int series,f,n;
    printf("Enter the  no.of terms to print in series:");
    scanf("%d",&series);
    //ask to print no.of terms

    for(n=0; n<series; n++)
    {
        f=fibo(n);
        //function call
        printf("%2d",f);
    }
}

int fibo(int n)
//function define
{
    //n=no.of terms
    if(n==0 || n==1)
    {//return 0 and 1 as 2 terms
        return n;
    }
    else
    {//adding terms n-2,n-1
        return fibo(n-1)+fibo(n-2);
    }
    printf("\n24CE053_Vaibhavi");
}
