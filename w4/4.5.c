#include "stdio.h"
int main(){
	char text[2];
	scanf("%c", &text);
	if (text[0] >= 65 && text[0] <= 90){
		printf("%c\n", text[0]+32);
	}else if(text[0] >= 97 && text[0] <= 122){
		printf("%c\n", text[0]-32);
	}else{
		printf("error\n");
	}
	return 0;
}