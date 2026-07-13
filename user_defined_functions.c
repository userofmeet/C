// Write a user defined function Max( ) which will find maximum number from entered three numbers.
#include <stdio.h>
int Max(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}
int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("The maximum number is %d\n", Max(x, y, z));
    return 0;
}


// Write a user defined function Even ( ) which will check enter number is even or odd. If it is even, it return 1 else 0.
#include <stdio.h>
int Even(int num) {
    return (num % 2 == 0) ? 1 : 0;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (Even(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}


// Write a program to find factorial of given number using a recursive function.
#include <stdio.h>

int Factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * Factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, Factorial(num));
    }
    return 0;
}


// Write a uder defind function Isupper( ) which will check enter character is in upper case or not. If it is in upper case, convert into lower case using another user defined function Convert( ).
#include <stdio.h>
#include <ctype.h>
void Convert(char *ch) {
    *ch = tolower(*ch);
}
int Isupper(char ch) {
    return isupper(ch);
}
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (Isupper(ch)) {
        Convert(&ch);
        printf("The character in lowercase is %c\n", ch);
    } else {
        printf("The character is not uppercase.\n");
    }
    return 0;
}


// Write a user defined function Rank( ) which will print the index of the student has maximum total marks. Total number of student are 50 and three sessional marks. Write an appropriate main( ) for demonstrating the use of Rank( ).
#include <stdio.h>
#define NUM_STUDENTS 50
void Rank(int marks[][3]) {
    int i, j;
    int max_total = 0;
    int max_index = 0;
    int total;
    for (i = 0; i < NUM_STUDENTS; i++) {
        total = 0;
        for (j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        if (total > max_total) {
            max_total = total;
            max_index = i;
        }
    }
    printf("The student with the maximum total marks is at index %d\n", max_index);
}
int main() {
    int marks[NUM_STUDENTS][3];
    int i, j;
    printf("Enter the sessional marks for 50 students (3 sessionals each):\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Sessional %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    Rank(marks);
    return 0;
}


// Write a user defined function Sort( ) which will sort the array element in ascending order.
#include <stdio.h
#define SIZE 10
void Sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

int main() {
    int arr[SIZE];
    int i;
    printf("Enter %d elements:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    Sort(arr, SIZE);
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
