/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 25/7/24
TO DISPLAY THE RESULT OF A STUDENT*/
#include<stdio.h>
#include<conio.h>
void main()
{

   int m;
   printf("ENTER THE MARKS:");
   fflush(stdin);
   scanf("%d",&m);

//condition of ternary operator
(m>=90)
   ?(printf("GRADE A"))
      :(m>=80)
       ?(printf("GRADE B"))
       :(m>=70)
           ?(printf("GRADE C"))
           :(m>=60)
                ?(printf("GRADE D"))
                :(m<=60)
                     ?(printf("GRADE E"))
                     : printf("Entered input is Invalid");
    printf("\n24CE053_Vaibhavi");
}
