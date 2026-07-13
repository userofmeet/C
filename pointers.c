// Write a program to compute are and perimeter of circle using pointer.
#include <stdio.h>
#define PI 3.14159
void computeCircle(float radius, float *area, float *perimeter) {
    *area = PI * radius * radius;
    *perimeter = 2 * PI * radius;
}
int main() {
    float radius, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    computeCircle(radius, &area, &perimeter);
    printf("Area of the circle: %.2f\n", area);
    printf("Perimeter of the circle: %.2f\n", perimeter);
    return 0;
}


// Write a program to convert decimal number entered by used in its equivalent binary
// number using pointer.
#include <stdio.h>
void decimalToBinary(int n, char *binary) {
    int index = 0;
    if (n == 0) {
        binary[index++] = '0';
        binary[index] = '\0';
        return;
    }
    while (n > 0) {
        binary[index++] = (n % 2) + '0';
        n /= 2;
    }
    binary[index] = '\0';
    // Reverse the binary string
    int start = 0;
    int end = index - 1;
    while (start < end) {
        char temp = binary[start];
        binary[start] = binary[end];
        binary[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int decimal;
    char binary[32]; // Assuming binary representation will not exceed 32 bits
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimalToBinary(decimal, binary);
    printf("Binary representation: %s\n", binary);
    return 0;
}


// Write a program to find lcm of two numbers using pointer.
#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void findLCM(int a, int b, int *lcm) {
    *lcm = (a * b) / gcd(a, b);
}
int main() {
    int num1, num2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    findLCM(num1, num2, &lcm);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}


// Write a program to reverse a given array of 20 elements using pointers.
#include <stdio.h>

#define SIZE 20

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[SIZE];

    printf("Enter %d elements:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, SIZE);

    printf("Reversed array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// Write a program to enter a sorted array and an integer value. Insert the new value at
// correct place using pointer.
#include <stdio.h>

#define MAX_SIZE 21  // 20 elements + 1 for the new element

void insertInSortedArray(int *arr, int size, int value) {
    int i = size - 1;
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;
}

int main() {
    int arr[MAX_SIZE - 1];
    int size, value;

    printf("Enter the number of elements in the sorted array (max 20): ");
    scanf("%d", &size);

    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new value to insert: ");
    scanf("%d", &value);

    insertInSortedArray(arr, size, value);

    printf("Array after insertion:\n");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// Write a program to find inverse of a matrix using pointers.
#include <stdio.h>

#define SIZE 2

void invertMatrix(float *matrix, float *inverse) {
    float det = matrix[0] * matrix[3] - matrix[1] * matrix[2];
    if (det == 0) {
        printf("Matrix is singular and cannot be inverted.\n");
        return;
    }

    float invDet = 1.0 / det;
    inverse[0] =  matrix[3] * invDet;
    inverse[1] = -matrix[1] * invDet;
    inverse[2] = -matrix[2] * invDet;
    inverse[3] =  matrix[0] * invDet;
}

int main() {
    float matrix[SIZE * SIZE];
    float inverse[SIZE * SIZE];

    printf("Enter the elements of a 2x2 matrix:\n");
    for (int i = 0; i < SIZE * SIZE; i++) {
        scanf("%f", &matrix[i]);
    }

    invertMatrix(matrix, inverse);

    printf("Inverse matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%.2f ", inverse[i * SIZE + j]);
        }
        printf("\n");
    }

    return 0;
}


// Write a program to find occurrences of given character in entered string using
// pointer.
#include <stdio.h>

void findOccurrences(const char *str, char ch, int *count) {
    *count = 0;
    while (*str) {
        if (*str == ch) {
            (*count)++;
        }
        str++;
    }
}

int main() {
    char str[100];
    char ch;
    int count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find: ");
    scanf("%c", &ch);

    findOccurrences(str, ch, &count);

    printf("Character '%c' occurs %d times.\n", ch, count);

    return 0;
}


// Write a program to find the longest word from the entered string and also find its
// length using pointer.
#include <stdio.h>
#include <string.h>

void findLongestWord(const char *str, char *longestWord) {
    int maxLength = 0;
    char word[100];
    int index = 0;

    while (*str) {
        if (*str == ' ' || *str == '\0') {
            word[index] = '\0';
            if (index > maxLength) {
                maxLength = index;
                strcpy(longestWord, word);
            }
            index = 0;
        } else {
            word[index++] = *str;
        }
        str++;
    }
    word[index] = '\0';
    if (index > maxLength) {
        strcpy(longestWord, word);
    }
}

int main() {
    char str[256];
    char longestWord[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    findLongestWord(str, longestWord);

    printf("Longest word: %s\n", longestWord);
    printf("Length of longest word: %lu\n", strlen(longestWord));

    return 0;
}


// Write a program to arrange the strings (3 entered strings) according to their length
// using array of pointers. 
#include <stdio.h>

#define SIZE 10

void sortDescending(int *arr, int n) {
    int *i, *j, temp;
    for (i = arr; i < arr + n - 1; i++) {
        for (j = i + 1; j < arr + n; j++) {
            if (*i < *j) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main() {
    int arr[SIZE];

    printf("Enter %d elements:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    sortDescending(arr, SIZE);

    printf("Array sorted in descending order:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


//Write a program to sort an array of 10 elements in
// descending order using pointer.
#include <stdio.h>

#define SIZE 10

void sortDescending(int *arr, int n) {
    int *i, *j, temp;
    for (i = arr; i < arr + n - 1; i++) {
        for (j = i + 1; j < arr + n; j++) {
            if (*i < *j) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main() {
    int arr[SIZE];

    printf("Enter %d elements:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    sortDescending(arr, SIZE);

    printf("Array sorted in descending order:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
