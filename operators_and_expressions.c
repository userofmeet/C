// Write a Program which will find the smallest out of three numbers using ternary operator.
#include <stdio.h>
int main() {
    int a, b, c, smallest;
    scanf("%d %d %d", &a, &b, &c);
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("%d\n", smallest);
    return 0;
}


// Enter a character from the input terminal. Check whether the entered character is in uppercase or is in lowercase. If the entered character is in uppercase print ‘1’ or print ‘0’.
#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    printf("%d\n", (ch >= 'A' && ch <= 'Z') ? 1 : 0);
    return 0;
}


// Write a program that determines whether a given integer is odd or even and displays the number and description on the same line.
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");
    return 0;
}


// Write a Program to check whether the entered character is in upper case or in lowercase. If the character is in uppercase then convert it to lowercase format and vice-versa.
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (isupper(ch)) {
        printf("%c\n", tolower(ch));
    } else if (islower(ch)) {
        printf("%c\n", toupper(ch));
    } else {
        printf("Character is neither uppercase nor lowercase.\n");
    }
    return 0;
}


// Write a Program to check validity of a variable by checking its first character.
#include <stdio.h>
#include <ctype.h>

int main() {
    char variable[100];
    printf("Enter a variable name: ");
    scanf("%s", variable);
    if (isalpha(variable[0]) || variable[0] == '_') {
        printf("Valid variable name.\n");
    } else {
        printf("Invalid variable name.\n");
    }
    return 0;
}


// Write a Program to take a float value form user and print it after rounding it off to nearest integer.
#include <stdio.h>
#include <math.h>

int main() {
    float num;
    scanf("%f", &num);
    printf("%d\n", (int)round(num));
    return 0;
}


