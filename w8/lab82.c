#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char name[30], surename[30], sex[6], id[8];
    int age;
    float grade;
}std;
std student[20];
std temp;

int main(){
    //Lab8-2
 	char my_sex[5];
    char stage[8];

    for(int i=0;i<20;i++){
    	scanf("%s %s %s %d %s %f", student[i].name, student[i].surename, student[i].sex, &student[i].age, student[i].id, &student[i].grade);
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
            }else if(strcmp(stage, "surename") == 0 && strcmp(student[j].surename,student[j-1].surename) < 0){
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

    //print
    for(int i=0;i<20;i++){
        char my_sex[5];
        strcpy(my_sex, student[i].sex);
        if(strcmp(my_sex, "Male")){
            printf("Miss ");
        }else{
            printf("Mr ");
        }
        printf("%c %s (%d) ID: %s GPA %.2f\n", student[i].name[0],student[i].surename,student[i].age,student[i].id,student[i].grade);
    }

    return 0;
}
