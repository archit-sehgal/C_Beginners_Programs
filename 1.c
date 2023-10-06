#include <stdio.h>

int main() {
    float a = 10, b = 20;
    printf("===== Fun with Arithmetic Operations =====\n");
    printf("Starting with a = %.2f and b = %.2f\n", a, b);

    // Addition
    float sum = a + b;
    printf("Addition: %.2f + %.2f = %.2f\n", a, b, sum);

    // Subtraction
    float difference = a - b;
    printf("Subtraction: %.2f - %.2f = %.2f\n", a, b, difference);

    // Multiplication
    float product = a * b;
    printf("Multiplication: %.2f * %.2f = %.2f\n", a, b, product);

    // Division
    float quotient = a / b;
    printf("Division: %.2f / %.2f = %.2f\n", a, b, quotient);

    printf("=========================================\n");

    return 0; 
}
