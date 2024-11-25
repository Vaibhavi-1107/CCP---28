/*PROGRAMMER : VAIBHAVI KARIYA
DATE:22/7/24
TO DISPLAY WHO IS WEALTHIER*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int Rb, Rp, Rc;
    /* where,
    Rb is Raman's bungalow,
    Rp is Raman's plot and
    Rc is Raman's car.
    */
    int Sap,Sh,Sc;
    /*where,
    Sap is Suman's apartment,
    Sh is Suman's hotel and
    Sc is Suman's car.
    */
    int RTotal, STotal;
    //Both property value

    Rb=12000000;
    Rp=6000000;
    Rc=3000000;
    Sap=11000000;
    Sh=8000000;
    Sc=8000000;
    RTotal=Rb+Rp+Rc;
    STotal=Sap+Sh+Sc;

    printf("Total amount of Raman:%d\n",RTotal);
    printf("Total amount of Suman:%d\n",STotal);

    if(RTotal>STotal)
    {
            printf("Raman is wealthier than Suman");
    }
    else if(RTotal<STotal)
    {
            printf("Suman is wealthier than Raman");
    }
    else
    {
            printf("Both are equal");
    }
    printf("\n24CE053_Vaibhavi");
}

