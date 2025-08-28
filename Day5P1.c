#include <stdio.h>
#include <math.h>

int main()
{
    float rate, time;
    int principal;

    printf("Enter the principal amount: ");
    scanf("%d", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    float amount = principal * pow((1 + rate / 100), time);
    printf("Amount after %.2f years: %f\n", time, amount);
    float simpleInterest = (principal * rate * time) / 100;
    float compoundInterest = amount - principal;

    printf("Simple interest is: %f\n", simpleInterest);
    printf("Compound interest is: %f\n", compoundInterest);

    return 0;
}
