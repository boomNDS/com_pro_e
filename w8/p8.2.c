#include "stdio.h"
#include "string.h"
#include "ctype.h"
typedef struct
{
    char name[25];
    char lastname[25];
    char sex[5];
    int age;
    char id[9];
    float gpa;
} student_info;
student_info student[20];
student_info temp;
int main(){
    char sex_me[5];
    char stage[8];
    for(int i=0;i<20;i++){
        scanf("%s %s %s %d %s %f\n",student[i].name, student[i].lastname, student[i].sex,&student[i].age,student[i].id,&student[i].gpa);
    }
    scanf("%s\n", stage);
    for(int i=0;i<strlen(stage);i++){
        stage[i] = tolower(stage[i]);
    }
    for(int i = 1;i<20;i++){
        for(int j=i;j>0;j--){
            if(strcmp(stage, "name")==0 && strcmp(student[j].name,student[j-1].name) < 0){
                temp = student[j];
                student[j] = student[j-1];
                student[j-1] = temp;
            }else if(strcmp(stage, "surname") == 0 && strcmp(student[j].lastname,student[j-1].lastname) < 0){
                temp = student[j];
                student[j] = student[j-1];
                student[j-1] = temp;
            }else if(strcmp(stage, "id") == 0 && strcmp(student[j].id,student[j-1].id) < 0){
                temp = student[j];
                student[j] = student[j-1];
                student[j-1] = temp;
            }
        }
    }
    // show data
    for(int i=0;i<20;i++){
        char sex_me[5];
        strcpy(sex_me, student[i].sex);
        if(strcmp(sex_me, "Male")){
            printf("Miss ");
        }else{
            printf("Mr ");
        }
        printf("%c %s (%d) ID: %s GPA %.2f\n", student[i].name[0],student[i].lastname,student[i].age,student[i].id,student[i].gpa);
    }
    return 0;
}