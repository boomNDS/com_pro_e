#include "stdio.h"
#include "string.h"
int main(){
	char text[6], old;
	int len;
	scanf("%s", text);
	len = strlen(text);
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(text[j]>text[i]){
				old = text[i];
				text[i] = text[j];
				text[j] = old;
			}
		}
	}
	printf("%s\n", text);
}