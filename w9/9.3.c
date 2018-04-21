#include "stdio.h"
#include "string.h"
#include "ctype.h"
int main(){
	char text[151], find;
	int len,count=0;
	scanf("%c\n",&find);
	scanf("%[^\n]",text);
	len = strlen(text);
	find = tolower(find);
	for(int i=0;i<len;i++){
		text[i] = tolower(text[i]);
		if(text[i] == find){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}