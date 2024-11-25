/*Programmer:Kariya Vaibhavi
Date:19/7/24
To Calculate illiterate men and women*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float LMP,TWP,TIW,TIM,Population, WomenPopulation, TotalLiteracyRate,LMR,LWR,TMP,LWP;
    Population=1441981744;
    WomenPopulation=48.4;
    TotalLiteracyRate=85.95;
    LMR=80.95;    //Literate Male Rate
    LWR=62.84;    //Literate Women Rate

    TWP=Population*(WomenPopulation/100);   //Total Women Population
    TMP=Population-TWP;    //Total Male Population
    LMP=TMP*(LMR/100);   //Total Literate Male
    LWP=TWP*(LWR/100);     //Total Literate Women
    TIW=TWP-LWP;     //Total Illiterate Women
    TIM=TMP-LMP;      //Total  Illiterate Male

    //Display Total count of Illiterate Male and Women
    printf("\nTotal Illiterate Male is :%f",TIM);
    printf("\nTotal Illiterate Women is:%f",TIW);

    printf("\n24CE053_Vaibhavi");
}
