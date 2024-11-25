/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 10/9/24
STRING CONCATING */
#include<stdio.h>
#include<conio.h>
void main()
{
  char n1[100],n2[100],i,j;

  printf("Enter the first note:");
      gets(n1);
  //gets for white space
  printf("Enter the second note:");
      gets(n2);
  for(i=0;n1[i]!='\0';++i);
  {
      for(j=0;n2[j]!='\0';++j,++i)
  {
      n1[i]=n2[j];
  }
      n1[i]='\0';
         printf("concat note:%s",n1);
  }
    printf("\n24CE053_Vaibhavi");
}
