#include <stdio.h>

typedef struct{
    char first_name[16];
    char last_name[16];
}Student;

typedef struct{
    char name[32];
}Subject;

typedef struct{
    float score;
    Subject subject;
    Student student;
}Score;

Score scores[5] = {
    {90.0, {"Mathematics"}, {"John", "Doe"}},
    {80.0, {"English"}, {"Jane", "Smith"}},
    {70.0, {"Science"}, {"Alice", "Johnson"}},
    {60.0, {"History"}, {"Bob", "Brown"}},
    {50.0, {"Geography"}, {"Charlie", "Davis"}}
};

int len = sizeof(scores) / sizeof(Score);

int main(){
    int mid_score = 0;
    for(int i=0; i<len; i++){
        mid_score += scores[i].score;
    }
    mid_score /= len;

    printf("O'rtacha balldan yuqori ball to'plagan talabalar:\n");
    printf("%-11s| %-10s| %-12s| %-6s\n", "First Name", "Last Name", "Subject", "Score");
    printf("---------------------------------------------\n");
    for(int i=0; i<len; i++){
        if(scores[i].score > mid_score){
            printf("%-11s| %-10s| %-12s| %-6.1f\n", 
                scores[i].student.first_name, scores[i].student.last_name, scores[i].subject.name, scores[i].score);
        }
    }
    return 0;
}


