#include <stdio.h>

void main() {
    printf("Enter the first number:\n");
    int a;
    scanf("%d", &a);
    printf("Enter the second number:\n");
    int b;
    scanf("%d", &b);
    printf("The sum of %d and %d is %d", a, b, a + b);
    printf("The difference of %d and %d is %d", a, b, a - b);
    printf("The product of %d and %d is %d", a, b, a * b);
    printf("The quotient of %d and %d is %d", a, b, a / b);
}