/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 19/8/24
TO CHECK NO IS ODD,EVEN,POSITIVE OR NEGATIVE */
#include<stdio.h>
#include<conio.h>
void main()
{
    int numbers[25],i;
    int positive_no =0, negative_no=0, even_no=0, odd_no=0;

    for(i=0;i<25;i++)
    {
      printf("Enter the no. positive or negative:");
      scanf("%d", &numbers[i]);

        if(numbers[i] > 0)
        {
            positive_no++;
        }
        else if(numbers[i] < 0)
        {
            negative_no++;
        }

        if(numbers[i] % 2 == 0)
        {
            even_no++;
        }
        else
        {
            odd_no++;
        }
    }

    printf("\nPositive: %d\n", positive_no);
    printf("Negative: %d\n", negative_no);
    printf("Even: %d\n", even_no);
    printf("Odd: %d\n",odd_no);
    printf("\n24CE053_Vaibhavi");
}
