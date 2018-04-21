#include "stdio.h"
#include "string.h"
#include "ctype.h"
int main(){
	char text[102],show[80]=' ';
	int count=0,max=0;
	scanf("%[^\n]",text);
	strcat (text," ");
	for(int i=0;i<strlen(text);i++){
		if(text[i] == ' '){
			if(count>max){
				max = count;
			}
			count = 0;
		}else{
			count++;
		}
	}
	for(int i=0;i<strlen(text);i++){
		if(text[i] == ' '){
			if(count==max){
				printf("%s\n", show);
				break;
			}
			count = 0;
		}else{
			count++;
			strcat (show,text[i]);
		}
	}
	printf("max %d\n", max);
	return 0;
}