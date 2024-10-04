#include <stdio.h>

int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %lf\n", gpa);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s\n", name);

    int c;
    do{
        c = getchar();
    }
    while(c != EOF && c != '\n');


    char name2[21];
    printf("Enter your name: ");
    fgets(name2, 21, stdin);
    printf("Your name is %s", name2);

    return 0;
}