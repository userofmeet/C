// Write a program to find the factors of any number. Also find the prime factors of that number.
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

void findFactors(int num) {
    printf("Factors of %d: ", num);
    for (int i = 1; i <= num; i++)
        if (num % i == 0)
            printf("%d ", i);
    printf("\n");
}

void findPrimeFactors(int num) {
    printf("Prime Factors of %d: ", num);
    for (int i = 2; i <= num; i++)
        while (num % i == 0) {
            if (isPrime(i)) printf("%d ", i);
            num /= i;
        }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    findFactors(num);
    findPrimeFactors(num);
    return 0;
}


// Write a program to input a string and display it in reverse order.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}


// Bubbles sort an array of 10 integers. Arrange them in descending order.
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

int main() {
    int arr[10];
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr, 10);
    printf("Sorted array in descending order: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}


// Define a structure book_shop. It should contain the name of the book, name of the author,
// number of copies available, price of the book and a Book ID No. Create a list of 5 such
// books. Write a function to search for a book using the name of the book. Ask the user for
// the number of copies he wants. Calculate the cost. If sufficient copies are not available,
// display appropriate message. Write a function to update the database after each purchase.
#include <stdio.h>
#include <string.h>

struct book_shop {
    char name[50];
    char author[50];
    int copies;
    float price;
    int bookID;
};

void searchBook(struct book_shop books[], int n) {
    char searchName[50];
    int requiredCopies;
    printf("Enter the name of the book: ");
    scanf("%s", searchName);
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].name, searchName) == 0) {
            printf("Enter the number of copies: ");
            scanf("%d", &requiredCopies);
            if (books[i].copies >= requiredCopies) {
                printf("Cost: %.2f\n", books[i].price * requiredCopies);
                books[i].copies -= requiredCopies;
            } else {
                printf("Insufficient copies available.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}

int main() {
    struct book_shop books[5] = {
        {"Book1", "Author1", 10, 150.0, 101},
        {"Book2", "Author2", 5, 200.0, 102},
        {"Book3", "Author3", 8, 120.0, 103},
        {"Book4", "Author4", 12, 175.0, 104},
        {"Book5", "Author5", 7, 250.0, 105}
    };
    searchBook(books, 5);
    return 0;
}


// Write a function to exchange the values of two variables. Use pass by reference method to
// exchange the data.
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
