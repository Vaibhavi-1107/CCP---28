/*PROGRAMMER:VAIBHAVI KARIYA
DATE:19/7/24
TO CALCULATE ADDITION,SUBTACTION,MULTIPLICATION,DIVISION*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,Add=0,Sub=0,Mul=0,Div=0;
    char Op;

    printf("Enter No.1:");
    scanf("%d",&i);

    printf("Enter No.2 :");
    scanf("%d",&j);

    fflush(stdin);

    printf("Enter the sign :");
    scanf("%c",&Op);

    switch(Op)
    {
        case '+':
            Add=i+j;
            printf("Addition is :%d",Add);
            break;
        case '-':
            Sub=i-j;
            printf("Subtraction is :%d",Sub);
            break;
        case '*':
            Mul=i*j;
            printf("Multiplication is :%d",Mul);
            break;
        case'/':
            Div=i/j;
            printf("division is :%d",Div);
            break;

    }
    printf("\n24CE053_Vaibhavi");
}
