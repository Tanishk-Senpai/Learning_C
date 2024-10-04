#include <stdio.h>

// pointers are another data type which stores physical memory addresses

int main(){

    int age = 30;
    
    // declaring a pointing variable
    int *pAge = &age;
    // in practice we name this variable starting 
    // with p and then followed by the variable name

    printf("age's memory address is: %p\n", pAge);

    return 0;
}