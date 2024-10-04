#include <stdio.h>
#include <math.h>

int main() {

    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Sum of %lf and %lf is %lf\n", num1, num2, num1+num2);

    return 0;
}