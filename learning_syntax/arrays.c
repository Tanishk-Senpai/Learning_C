#include <stdio.h>
#include <stdlib.h>

int main() {

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    printf("%d\n", luckyNumbers[0]);

    luckyNumbers[0] = 200;
    printf("%d\n", luckyNumbers[0]);

    int unluckyNumebers[10];
    unluckyNumebers[0] = 69;
    printf("%d\n", unluckyNumebers[0]);

    char phrase[20] = "Array";
    printf("%s\n", phrase);

    return 0;

}