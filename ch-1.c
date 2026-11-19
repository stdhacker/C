// Variables, Data types + Input/Output: 

#include <stdio.h>

int main()
{
    // 1. Variable Declaration and Initialization
    char name[50];
    int age = 18;
    unsigned int roll;
    float marks;
    double fees;
    char grade;

    // 2. Taking Input from User
    printf("===== STUDENT INFORMATION =====\n\n");

    printf("Enter Your Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%u", &roll);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("Enter College Fees: ");
    scanf("%lf", &fees);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    // 3. Displaying Output
    printf("\n\n===== STUDENT DETAILS =====\n");

    printf("Name:\t\t%s\n", name);
    printf("Roll Number:\t%u\n", roll);
    printf("Age:\t\t%d years\n", age);
    printf("Marks:\t\t%.2f\n", marks);
    printf("Fees:\t\t%.2lf\n", fees);
    printf("Grade:\t\t%c\n", grade);

    // 4. Size of Data Types
    printf("\n===== DATA TYPE SIZE =====\n");

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu byte\n", sizeof(char));

    return 0;
}