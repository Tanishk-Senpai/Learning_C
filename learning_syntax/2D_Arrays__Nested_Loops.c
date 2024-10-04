#include <stdio.h>

int main() {

    int nums[3][3] = {{2, 3, 4}, {3, 4, 2}, {2, 3, 5}};

    printf("%d\n",  nums[0][0]);

    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d, ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}