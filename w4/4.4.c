#include "stdio.h"
int main(){
	float grade;
	scanf("%f", &grade);
	if(grade <=100 && grade >= 80){
		printf("A\n");
	}else if(grade < 80 && grade >= 70){
		printf("B\n");
	}else if(grade < 70 && grade >= 60){
		printf("C\n");
	}else if(grade < 60 && grade >= 50){
		printf("D\n");
	}else if(grade < 50 && grade >= 0){
		printf("F\n");
	}else{
		printf("Out of Range\n");
	}
}