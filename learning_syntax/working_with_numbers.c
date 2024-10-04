#include <stdio.h>
#include <math.h>

int main() {
    printf("%d\n", 5+4);
    printf("%f\n", floor(36.545));
    printf("%lf\n", 5 / 4.0);
    printf("%d\n", 5 / 4);
    
    int num = 6;
    printf("%d\n", num);

    printf("%f\n", pow(2,3));
    
    return 0;
}

// performing mathematical operations on two integers 
// will give a integer as well. like 5/4 = 1\
// to get the actual value, do something like 5 / 4.0
// #include <math.h> when using built in math functions