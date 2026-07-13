// Write a program to sort given 10 numbers in ascending order.
#include <stdio.h>
int main() {
    int numbers[10], i, j, temp;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    printf("Numbers in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}


// Write a program to find the transpose of the 3x3 matrixes
#include <stdio.h>
int main() {
    int matrix[3][3], transpose[3][3], multiplication[3][3];
    int i, j, k;
    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Compute transpose of the matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    // Print the transpose
    printf("Transpose of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    // Compute multiplication of matrix with itself
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            multiplication[i][j] = 0;
            for (k = 0; k < 3; k++) {
                multiplication[i][j] += matrix[i][k] * matrix[k][j];
            }
        }
    }
    // Print the multiplication result
    printf("Multiplication of the matrix with itself:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", multiplication[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// Write a program, which reads a string from the keyboard and generates the alphabetical order of characters that represents the string. Eg. PROGRAM should be written as AGMOPRR.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int main() {
    char str[MAX], temp;
    int i, j;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Convert string to uppercase
    for (i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }

    // Sort the string
    for (i = 0; str[i]; i++) {
        for (j = i + 1; str[j]; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Alphabetical order: %s\n", str);

    return 0;
}


// Write a program to check whether the string is a palindrome or not.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int main() {
    char str[MAX], reversed[MAX];
    int i, length, isPalindrome = 1;
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    // Convert string to lowercase
    for (i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    length = strlen(str);
    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';
    // Check if the original string is the same as the reversed string
    if (strcmp(str, reversed) != 0) {
        isPalindrome = 0;
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}


