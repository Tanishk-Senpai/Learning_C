#include <stdio.h>
#include <math.h>

double cube(double num);

int main() {

    printf("%lf\n",cube(5));


    return 0;
}

double cube(double num){
    double result = pow(num, 3);
    return result;
}
