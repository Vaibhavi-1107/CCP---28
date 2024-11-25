/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 27/10/24
POINTER FOR SWAPPING  */
#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Values before swapping :");
    scanf("%d\n",p);
    scanf("%d",q);

    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;

    printf("Values after swapping :%d, \n%d",*p,*q);
    printf("\n24CE053_Vaibhavi");
    return 0;
}
