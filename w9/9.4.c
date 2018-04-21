#include "stdio.h"
#include "string.h"
#include "ctype.h"
int main(){
	char text[152];
	int count=0,amount=0;
	scanf("%[^\n]",text);
	strcat (text," ");
	for(int i=0;i<strlen(text);i++){
		if(text[i] == ' '){
			count = 0;
			amount ++;
		}else{
			count++;
		}
	}
	printf("%d words\n", amount);
	printf("----\n");
	for(int i=0;i<strlen(text);i++){
		printf("%c",tolower(text[i]));
		if(text[i] == ' '){
			printf(": %d\n", count);
			count = 0;
		}else{
			count++;
		}
	}
	return 0;
}