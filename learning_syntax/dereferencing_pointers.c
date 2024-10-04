#include <stdio.h>

int main() {

    int age = 30;
    int *pAge = &age;

    // printing pointer
    printf("%p\n", pAge);

    // dereferencing pointer
    // we can grab the piece of information which the pointer was pointing to
    printf("%d\n", *pAge);

    // printing memory address
    printf("%p\n", &age);
    // printing original value
    printf("%d\n", *&age);

    return 0;
}