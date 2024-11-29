/*PROGRAMMER: VAIBHAVI KARIYA
DATE:22/11/24
TO STORE THE STRING USING DYNAMIC ARRAY */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str;
    int memsize=10;     //initial memory size


    *str = (char *)calloc(memsize,sizeof(char));

    if(str == NULL) {

    printf("Memory allocation failed\n");

    return -1;

    }
    printf("Enter a string (< %d chars):",memsize-1);
    scanf("%[^\n]",str);

    printf("Initial sting: %s\n",str);

    printf("Initial Memory Size : %d\n",memsize);

    memsize = 20;        //new memory size

    str =(char *)realloc(str, memsize * sizeof(char));

    if(str == NULL) {
    printf("memory reallocation failed\n");
    return -1;
    }

    printf("Enter a larger string (< %d chars):",memsize-1);
    scanf("%[^\n]",str);      //Added space before % to consume newline

    printf("Modified string : %s\n",str);
    printf("Modified Memory Size :%d\n",memsize);

    free(str);

    printf("\n24CE053_Vaibhavi");
}
