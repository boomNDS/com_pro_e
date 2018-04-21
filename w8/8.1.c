#include "stdio.h"
#include "string.h"
typedef struct
{
    char name[25];
    char lastname[25];
    char sex[5];
    int age;
    char id[9];
    float gpa;
} student_info;
student_info per1;
int main(){
    char sex_me[5];
    scanf("%s %s %s %d %s %f",per1.name, per1.lastname, per1.sex,&per1.age,per1.id,&per1.gpa);
    strcpy(sex_me, per1.sex);
    if(strcmp(sex_me, "Male")){
        printf("Miss ");
    }else{
        printf("Mr ");
    }
    printf("%c %s (%d) ID: %s GPA %.2f\n", per1.name[0],per1.lastname,per1.age,per1.id,per1.gpa);
    return 0;
}