#include <stdio.h>

void main() {
printf("Enter the length of rectangle:\n");
int l;  
scanf("%d", &l);
printf("Enter the breadth of rectangle:\n");
int b;
scanf("%d", &b);
printf("The area of rectangle is %d", l*b);
printf("The perimeter of rectangle is %d", 2*(l+b));
}