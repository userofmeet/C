// 1. Write a Program to find Factorial of a given number using if....else.
#include <stdio.h>
int main() {
    int num, i;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }
    return 0;
}


// 2. Write a Program to find the solution of Quadratic Equation using if....else.
#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (a == 0) {
        printf("Not a quadratic equation.\n");
    } else if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lf i\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lf i\n", realPart, imaginaryPart);
    }
    return 0;
}


// 3. Write a Program to print the appropriate message depending on time which will be
#include <stdio.h>
int main() {
    int hour;
    printf("Enter the hour of the day (0-23): ");
    scanf("%d", &hour);
    if (hour >= 0 && hour < 12) {
        printf("Good morning!\n");
    } else if (hour >= 12 && hour < 18) {
        printf("Good afternoon!\n");
    } else if (hour >= 18 && hour < 21) {
        printf("Good evening!\n");
    } else if (hour >= 21 && hour < 24) {
        printf("Good night!\n");
    } else {
        printf("Invalid hour entered.\n");
    }
    return 0;
}


// Write a Program to find whether the entered number is odd or even.
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}


// Write a program to find whether a character is consonant or vowel.
#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel\n", ch);
    } else if ((ch >= 'a' && ch <= 'z')) {
        printf("%c is a consonant\n", ch);
    } else {
        printf("%c is not an alphabet\n", ch);
    }
    return 0;
}


// Write a program to check even or odd number.
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}


// Write a program to find maximum between two numbers.
#include <stdio.h>
int main() {
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("The maximum number is %d\n", num1);
    } else if (num2 > num1) {
        printf("The maximum number is %d\n", num2);
    } else {
        printf("Both numbers are equal\n");
    }
    return 0;
}


// Write a Program using while loop to reverse the digit of number. (Hint: 345 ->543)
// Write a Program to print following output.
// (a)
// 1
// 2 2
// 3 3 3
// 4 4 4 4
#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}


// (b)
// 1
// 1 2
// 1 2 3
// 1 2 3 4
#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}


// Write a Program to calculate Fibonacci series of n numbers using do....whileloop.
#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, i = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number of terms should be a positive integer.\n");
    } else {
        printf("Fibonacci Series: ");
        do {
            if (i == 1) {
                printf("%d ", first);
            } else if (i == 2) {
                printf("%d ", second);
            } else {
                next = first + second;
                first = second;
                second = next;
                printf("%d ", next);
            }
            i++;
        } while (i <= n);
        printf("\n");
    }
    return 0;
}


// Write a program to print following output:
// 1
// 1 1
// 1 1 1
// 1 1 1 1
#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
}


// Write a program to generate Pascal’s triangle
// 1
// 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
#include <stdio.h>
int main() {
    int i, j, k, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                printf("1 ");
            } else {
                int num = 1;
                for (k = 1; k <= j; k++) {
                    num = num * (i - k + 1) / k;
                }
                printf("%d ", num);
            }
        }
        printf("\n");
    }
    return 0;
}


// Write a program to calculate following series:
// 1/12 +2/22 +3/32 +.........+n/n2
#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (double)i / (i * i);
    }
    printf("Sum of the series: %.4f\n", sum);
    return 0;
}
