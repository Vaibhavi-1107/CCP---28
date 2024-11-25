/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 2/9/24
TO SORT PRIZE WHICH CHOOSE BY USER */
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[50],i,k,a,b,c,q;
    //k for total item is selected by user
    //i for selected item prize
    printf("Enter the value of item select:");
    scanf("%d",&k);

    for(a=0;a<k;a++)
    {
        printf("Enter the %d item price :",a+1);
        scanf("%d",&A[a]);
    }
    for(b=0;b<k;b++)
    {
        for(c=b+1;c<k;c++)
        {
            if(A[b]>A[c])
            {
                i=A[b];
                A[b]=A[c];
                A[c]=i;
            }
        }
    }
    for(q=0;q<k;q++)
    {
        printf("\nThe %d item price id: %d",q+1,A[q]);
    }
    printf("\n24CE053_Vaibhavi");
}
