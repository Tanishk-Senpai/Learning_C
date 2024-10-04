#include <stdio.h>
#include <string.h>

// give capital letter starting to struct names
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main() {
    //creating a container student1 which will hold name, major, age, gpa
    struct Student student1;
    student1.age = 18;
    student1.gpa = 3.2;
    strcpy(student1.name, "Tanishk");
    strcpy(student1.major, "Engineering");

    struct Student student2;
    student2.age = 17;
    student2.gpa = 4.8;
    strcpy(student2.name, "Ajay");
    strcpy(student2.major, "Engineering");

    printf("%f\n", student1.gpa);
    printf("%s\n", student1.name);

    printf("%f\n", student2.gpa);
    printf("%s\n", student2.major);


    return 0;
}