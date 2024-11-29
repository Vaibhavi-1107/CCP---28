/*PROGRAMMER:VAIBHAVI KARIYA
DATE: 25/7/24
WRITE AND READ THE MARKS OF THE STUDENTS */
#include<stdio.h>
int main()
{
    FILE *file;
    int marks, num_students, i;

    //Write student marks to a file
    file = fopen("student_marks.dat","w");  //open the file for writing
    if(file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

        printf("Enter the number of students : ");
        scanf("%d", &num_students);

    for(i=0; i<num_students; i++) {
        printf("Enter mark of student %d :",i+1);
        scanf("%d",&marks);
        putw(marks, file);   //Write marks to a file
        }
        fclose(file);   //close the file after writing
    //Read student marks from the file
    file = fopen("student_marks.dat","r");
    if(file == NULL) {
            printf("Error opening file for reading");
            return 1;
    }

        printf("\nThe marks of the students are :\n");
        for(i=0;i<num_students;i++) {
            marks=getw(file);  //Read marks from the file
            printf("Student %d: %d\n",i+1,marks);
        }

        fclose(file);   //close the file after reading

        printf("\n24CE053_Vaibhavi");
        return 0;
}
