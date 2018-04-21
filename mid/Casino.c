#include "stdio.h"
#include "string.h"
int main(){
	int cup[3]={0,0,0},len;
	char where,text[200];
	len = strlen(text)-1;
	scanf("%c", &where);
	scanf("%s", text);
	if(where=='L'){
		cup[0] = 1;
	}else if(where=='C'){
		cup[1] = 1;
	}else if(where=='R'){
		cup[2] = 1;
	}
	len = strlen(text)-1;
	int temp = 0;
	for(int i=0;i<=len;i++){
		if(text[i]=='A'){
			temp = cup[0];
			cup[0] = cup[1];
			cup[1] = temp;
		}else if(text[i]=='B'){
			temp = cup[1];
			cup[1] = cup[2];
			cup[2] = temp;
		}else if(text[i]=='C'){
			temp = cup[0];
			cup[0] = cup[2];
			cup[2] = temp;
		}
	}
	for(int i=0;i<3;i++){
		if(cup[i]==1){
			if(i==0){
				printf("L");
			}else if(i==1){
				printf("C");
			}else if(i==2){
				printf("R");
			}
		}
	}
	return 0;
}