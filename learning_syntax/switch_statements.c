#include <stdio.h>

int main(){

    char grade = 'D';

    switch(grade){

        case 'A' :
            printf("You did great! \n");
            break;
        case 'B' :
            printf("You did alright! \n");
            break;
        case 'C' :
            printf("You did poorly! \n");
            break;
        case 'D' :
            printf("You Failed! \n");
            break;
        default :
            printf("Invalid Grade\n");


    }       


    return 0;
}