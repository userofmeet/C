// Write a program to make structure of 100 students. Name, roll no., marks of 5
// subjects is members of the structure. Make a function merit ( ) which arranges 100
// students according to their result using pointer. Write a function to determine
// maximum or minimum number from two numbers entered from the keyboard and
// display in calling function using function returning pointer.

// (1)
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define SUBJECTS 5

typedef struct {
    char name[50];
    int roll_no;
    float marks[SUBJECTS];
} Student;

void merit(Student *students, int n) {
    float totalMarks[n];
    Student temp;

    for (int i = 0; i < n; i++) {
        totalMarks[i] = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            totalMarks[i] += students[i].marks[j];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (totalMarks[i] < totalMarks[j]) {
                // Swap total marks
                float tempMarks = totalMarks[i];
                totalMarks[i] = totalMarks[j];
                totalMarks[j] = tempMarks;

                // Swap students
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void displayStudents(const Student *students, int n) {
    printf("Roll No\tName\t\tMarks\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t", students[i].roll_no, students[i].name);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("%.2f ", students[i].marks[j]);
        }
        printf("\n");
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int n;

    printf("Enter number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Marks for subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    merit(students, n);
    displayStudents(students, n);

    return 0;
}


// (2)
#include <stdio.h>

int* findMaxOrMin(int a, int b, int mode) {
    static int result;
    if (mode == 1) {  // 1 for maximum
        result = (a > b) ? a : b;
    } else {  // 0 for minimum
        result = (a < b) ? a : b;
    }
    return &result;
}

int main() {
    int num1, num2;
    int *maxMin;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    maxMin = findMaxOrMin(num1, num2, 1);  // Find maximum
    printf("Maximum: %d\n", *maxMin);

    maxMin = findMaxOrMin(num1, num2, 0);  // Find minimum
    printf("Minimum: %d\n", *maxMin);

    return 0;
}
