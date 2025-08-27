#include <stdio.h>

int main(){
    float r;
    printf("Enter the radius of circle:\n");
    scanf("%f", &r);
    printf("The area of circle is %f", 3.14*r*r);
    printf("\nThe circumference of circle is %f", 2*3.14*r);
    return 0;
}