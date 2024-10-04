#include <stdio.h>

int main() {

    FILE * fpointer = fopen("employees.txt", "w");


    fclose(fpointer);
    return 0;
}