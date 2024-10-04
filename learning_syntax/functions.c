#include <stdio.h>

void sayHi(char name[]);
void age(int age);

int main() {

    sayHi("Tanishk");
    age(18);
    
    return 0;
}

void sayHi(char name[]) {
    printf("Hello %s\n", name);
}

void age(int age){
    printf("You are %d years old.\n", age);
}