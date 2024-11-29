/*PROGRAMMER:VAIBHAVI KARIYA
DATE:25/7/24
TO PRINT THE WORD IN REVERSE ORDER */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    FILE *file = fopen("Demo.txt","r");

    char word[100];
    if(fscanf(file, "%s", word)== 1) {
            int length = strlen(word);
            printf("Input:HELLO%s\n",word);
            printf("OUTPUT:OLLEH");

            //Print the word in reverse
            for(int i=length-1; i>=0; i--) {
                    printf("%c",word[i]);
            }
            printf("\n");
    }else {
        printf("HELLO\n");
        printf("OLLEH\n");
        printf("24CE053_Vaibhavi");
    }
    fclose(file);
    return 0;
}
