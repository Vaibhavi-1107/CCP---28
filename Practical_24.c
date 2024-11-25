/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 21/10/24
DISPLAY THE DETAIL OF THE BOOK  */
#include<stdio.h>
#include<conio.h>
//define a structure for a book
struct Book {
int id;
char title[100];
char author[100];
float price;
};
//Functions to input details of a book
void inputBookDetails(struct Book* book)
{
    printf("Enter bookid :");
    scanf("%d",&book.id);
    printf("Enter Book Title :");
    scanf("%s",book.title);
    printf("Enter Author name:");
    scanf("%s",book.author);
    printf("Enter book price");
    scanf("%f",&book.price);
//Functions to display details of a book
void displayBookDetails(const struct Book* book)
    printf("Book id :%d\n",book1.id);
    printf("Book Title :%s\n",book1.title);
    printf("Book Author:%s\n",book1.author);
    printf("Book Price :%.2f\n",book1.price);
}
int main()
{
struct Book book1;
printf("Enter details of the book:");
inputBookDetails(&book1);
printf("\nDetails of the book :");
displayBookDetails(&book1);
return 0;
}
printf("\n24CE053_Vaibhavi");
