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
