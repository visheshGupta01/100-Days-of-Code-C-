#include <stdio.h>

int main(){
    int temp;
    printf("Enter the temprature in celsius:\n");
    scanf("%d", &temp);
    printf("The temprature in fahrenheit is %d", (temp*9/5)+32);
    return 0;
}