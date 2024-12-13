#include <stdio.h>
#include <string.h>

 typedef struct {
    char name[64];
    char surname[64];
    int age;
    int grade;
} Student;

int main(){

    Student student = {"Nozimbek", "Uralov", 12, 5};

    printf("%s\n", student.name);  // member operator
    printf("%s\n", student.surname);
    printf("%d\n", student.age);
    printf("%d\n", student.grade);

    return 0;
}
