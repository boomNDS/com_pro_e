#include "stdio.h"
#include "string.h"
int main(){
	char text[151];
	scanf("%[^\n]",text);
	for(int i = 0;i<strlen(text);i++){
		if(text[i] != ' '){
			printf("%c", text[i]);
		}
	}
	printf("\n");
	return 0;
}