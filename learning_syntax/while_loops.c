#include <stdio.h>

int main() {

    int index = 1;
    int index2 = 6;

    while(index <= 5){
        printf("%d\n", index);
        index++;
        // can also use index += 1
        // index += 1;
    }

    do {
        printf("%d\n", index2);
        index2++;
    }while(index2 <= 5);
    // with do while loop the compiler firstly executes the line of code in the do block and then
    // check whether it can continue the loop from the condition in the while(*condition here*);

    return 0;
}