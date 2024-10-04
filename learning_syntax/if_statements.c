#include <stdio.h>

int max(int num1, int num2);
int max3(int num1, int num2, int num3);


int main() {

    printf("%d\n", max(50, 12));
    printf("%d\n", max(100, 200));
    printf("%d\n", max(69, 69));

    printf("%d\n", max3(10,20,30));
    printf("%d\n", max3(20,40,10));
    printf("%d\n", max3(10,20,50));
    
    if(3 > 2){
        printf("True\n");
    } else {
        printf("False\n");
    }

    if(!(3 > 2)){
        printf("True\n");
    }else {
        printf("False\n");
    }
    return 0;
}

int max(int num1, int num2){
    int result;

    if(num1 > num2){
        result = num1;
    } else{
        result = num2;
    }

    return result;
}

int max3(int num1, int num2, int num3){
    int result;

    if (num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else{
        result = num3;
    }
    
    return result;
}

// logical operators
/*
&& means and
|| means or
! is used for negation
*/