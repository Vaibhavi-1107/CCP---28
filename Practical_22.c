/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 5/10/24
TO CALCULATE AVERAGE, TOTAL, LOW, HIGHEST  */
#include<stdio.h>
#include<conio.h>
#include<math.h>
float total_Marks(int n,int Mark[]);
//with return type and parameter
void avg_Marks(int n, int Sum);
//no return type but passing an argument
void highest_lowest_Marks(int n, int Marks[]);
//no return type but passing an argument

void main()
{
    int i,n,Marks[50],sum;
        printf("Enter the total no.of students:");
    scanf("%d",&n);
    printf("Enter the CCP marks of students.\n\n");

    for(i=0;i<n;i++)
    {
        printf("CCP marks of student %d :",i+1);
        scanf("%d",&Marks[i]);
    }
    //total marks
    sum=total_Marks(n,Marks);
    //avg. marks
    avg_Marks(sum,n);
    //highest-lowest marks
    highest_lowest_Marks(n,Marks);
}

    //function definition
    //Calculate total marks
    float total_Marks(int n,int mark[])
    {
    int i,Sum=0;
    for(i=0;i<=n;i++)
    {
    Sum=Sum+mark[n];//to take total of all marks of students
    }
    printf("total marks is: %d\n",Sum);

    return Sum;
}

    //Calculate Avg.Marks
void avg_Marks(int Sum,int n)
{
    float Average=Sum/(float) n;
    printf("Average marks is: %.2f\n",Average);//to print average of all marks as input
}

//find highest marks
void highest_lowest_Marks(int n,int Marks[])
{
    int i,j,a;
    for(i=0;i<n-1;i++)
    {
    for(j=i+1;j<n;j++)
    {
       if(Marks[i]>Marks[j])//calculate highest and lowest
            {
                a=Marks[i];
                Marks[i]=Marks[j];
                Marks[j]=a;
            }
    }
}
    printf("Highest Marks is:%d\n",Marks[n-1]);
    //print highest marks
    printf("Lowest Marks is:%d\n",Marks[0]);
    //print lowest marks
    printf("\n24CE053_Vaibhavi");
}

