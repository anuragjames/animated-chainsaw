#include <stdio.h>
int main() {
    int age;
    // Taking input from user
    printf("Enter your age (0 - 100): ");
    scanf("%d", &age);
    // Using if-else if ladder to determine the grade
    if (age >= 60) {
        printf("You are not Eligible.\n");
    }
    else if (age <= 18) {
        printf("You are not Eligible.\n");
    }
    else {
        printf("You are Eligible.\n");
    }
    return 0;
}