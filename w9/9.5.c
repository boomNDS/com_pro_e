#include "stdio.h"
#include "string.h"
#include "ctype.h"
int main(){
	char text[152];
	int count_text=0,count_word=0,line=0,len;
	scanf("%[^\n]\n",text);
	while(strcmp(text, ".") != 0){
		strcat (text," ");
		len = strlen(text);
		for(int i = 0;i<len;i++){
			if(text[i] == ' '){
				count_word ++;
			}else{
				count_text++;
			}
		}
		line ++;
		scanf("%[^\n]\n",text);
	}
	printf("Char = %d, word = %d, line = %d\n", count_text, count_word, line);
	return 0;
}