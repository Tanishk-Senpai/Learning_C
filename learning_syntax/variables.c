#include <stdio.h>

int main() {
    char character_name[] = "John"; 
    // char represents character(like string in python) 
    // giving [] after variable name allows us to have multiple characters in the variable
    // we call these arrays
    int character_age = 35;
    // int represents integer

    printf("There once was a man named %s\n", character_name);
    // %s tells c that we will add a char variable here
    printf("He was %d years old.\n", character_age);
    // %d tells c that we will add an int variable here
    printf("He really liked the name %s.\n", character_name);
    printf("But he did not like being %d.\n", character_age);
    
    return 0;

}


// output
/*
There once was a man named John
He was 35 years old.
He really liked the name John.
But he did not like being 35.
*/