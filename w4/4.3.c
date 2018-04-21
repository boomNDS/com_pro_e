#include "stdio.h"
int main(){
	char grade[2];
	scanf("%c", &grade);
	switch (grade[0]){
		case 'A':
         printf("Genius\n");
         break;
      case 'a':
         printf("Genius\n");
         break;
      case 'B':
         printf("Good\n");
         break;
      case 'b':
         printf("Good\n");
         break;
      case 'C':
         printf("Try Harder\n");
         break;
      case 'c':
         printf("Try Harder\n");
         break;
      case 'D':
         printf("Very Bad\n");
         break;
      case 'd':
         printf("Very Bad\n");
         break;
      case 'F':
         printf("Fail\n");
         break;
      case 'f':
         printf("Fail\n");
         break;
      default:
         printf("Invalid Input\n");
	}
	return 0;
}