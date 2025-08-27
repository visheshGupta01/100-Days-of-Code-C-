#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter the first no:\n");
    scanf("%d", &num1);
    printf("Enter the second no:\n");
    scanf("%d", &num2);
    num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("After swap: %d , %d", num1, num2);
    return 0;
}