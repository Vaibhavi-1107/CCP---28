/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 10/9/24
TO PRINT LENGTH OF STRING  */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,l=0;
    char n[50];
  //where n is array
  printf("Enter the note:");
  gets(n);
  //gets for white space
  for(i=0;n[i]!='\0';i++)
  {
      l++;
  }
  printf("Length of String:%d",l);
  printf("\n24CE053_Vaibhavi");
}
