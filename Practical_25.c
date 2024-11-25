/*PROGRAMMER: VAIBHAVI KARIYA
DATE: 21/10/24
DISPLAY THE DETAIL OF THE BOOK USING UNIONS */
#include <stdio.h>

// Defining the Union Library
union Library {
    int accessionNumber;   // To store the accession number of the book
    char title[100];       // To store the title of the book
    char author[100];      // To store the author's name
    float price;           // To store the price of the book
    int flag;              // To store a flag indicating some status (e.g., 1 = available, 0 = checked out)
};
int main() {
    // Declare a variable of type Union Library
    union Library book;

    // Access and set the accession number
    book.accessionNumber = 12345;
    printf("Accession Number: %d\n", book.accessionNumber);

    // Access and set the title of the book
    // Note that assigning a string will overwrite the previous data in the union.
    snprintf(book.title, sizeof(book.title), "The Great Gatsby");
    printf("Book Title: %s\n", book.title);

    // Access and set the author's name
    snprintf(book.author, sizeof(book.author), "F. Scott Fitzgerald");
    printf("Author: %s\n", book.author);
      // Access and set the price of the book
    book.price = 15.99;
    printf("Price: %.2f\n", book.price);

    // Access and set the flag (e.g., 1 means available)
    book.flag = 1;
    printf("Flag (1 for available): %d\n", book.flag);
    printf("\n24CE053_Vaibhavi");

    return 0;
}
