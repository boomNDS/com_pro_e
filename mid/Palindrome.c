#include "stdio.h"
#include "string.h"
int main(){
	int num,len,count;
	scanf("%d", &num);
	char text[num][101];
	for(int i=0;i<num;i++){
		scanf("%s",text[i]);
	}

	for(int i=0;i<num;i++){
		count = 0;
		len = strlen(text[i])-1;
		for(int j=0;j<len;j++){
			if(text[i][j]==text[i][len-j]){
				count++;
			}
		}
		if(count>(len/2)){
			printf("%s\n", text[i]);
		}
	}
	return 0;
}