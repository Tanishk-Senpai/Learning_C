#include <stdio.h>

int main(){

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    // p stands for pointer
    printf("age: %p\nname: %p\ngrade: %p\n", &age, &gpa, &grade);

    return 0;
}