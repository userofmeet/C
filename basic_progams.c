// Write a C program to print the address of DDU
#include <stdio.h>
int main() {
    printf("Address of DDU: \n");
    printf("Dharmsinh Desai University\n");
    printf("College Road, Nadiad,\n");
    printf("Gujarat, India\n");
    return 0;
}


// Write a C program to print followings outputs using backslash character.
//a) “Hello”
//b) How are you?
//c) \\ single line comment in C
//d) // invalid syntax for comment in C
#include <stdio.h>
int main() {
    // a) Printing "Hello" using quotes
    printf("\"Hello\"\n");
    // b) Printing How are you?
    printf("How are you?\n");
    // c) Printing \\ single line comment in C
    printf("\\\\ single line comment in C\n");
    // d) Printing // invalid syntax for comment in C
    printf("// invalid syntax for comment in C\n");
    return 0;
}


// Write a Program to find an area of a circle and also perimeter of a circle where radius is entered by user.
#include <stdio.h>
#define PI 3.14159
int main() {
    float radius, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Perimeter (circumference) of the circle: %.2f\n", perimeter);
    return 0;
}


// Write a Program for swapping the value of two variables (a) without using third variable (b)with using third variable.
// (a)
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
// (b)
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}


// Write a program to display ASCII value of specific character on screen.
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("The ASCII value of %c is %d\n", ch, ch);
    return 0;
}


// Write a Program to read the following input using scanf statements and print in same format. i) 01/09/2010 ii) 324 45B 13.67
#include <stdio.h>
int main() {
    int day, month, year;
    int num1;
    char charValue;
    float floatValue;
    
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%d %c %f", &num1, &charValue, &floatValue);
    
    printf("%02d/%02d/%d\n", day, month, year);
    printf("%d %c %.2f\n", num1, charValue, floatValue);
    
    return 0;
}


//Write a Program which will find the smallest out of three numbers using ternary operator.
#include <stdio.h>
int main() {
    int a, b, c, smallest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("The smallest number is: %d\n", smallest);
    return 0;
}


// Enter a character from the input terminal. Check whether the entered character is in uppercase or is in lowercase. If the entered character is in uppercase print ‘1’ or print ‘0’.
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("%d\n", (ch >= 'A' && ch <= 'Z') ? 1 : 0);
    return 0;
}


// Write a program that determines whether a given integer is odd or even and displays the number and description on the same line.
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");
    return 0;
}


