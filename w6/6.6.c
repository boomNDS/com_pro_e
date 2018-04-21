#include "stdio.h"
#include "string.h"
#include "ctype.h"
int main(){
	char name_list[20][61],temp[61],texta[61],textb[61];
	int len,check;
	for(int i=0;i<20;i++){
		scanf("%[^\n]\n", name_list[i]);
	}
	for(int i=0;i<20;i++){
		for(int k =0;k<61;k++){
			name_list[i][k] = tolower(name_list[i][k]);
		}
	}
	for(int i=0;i<20;i++){
		len = strlen(name_list[i])-1;
		for(int k =0;k<len;k++){
			if(k<1|| !isalpha(name_list[i][k-1]))
				name_list[i][k] = toupper(name_list[i][k]);
			}
	}
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			strcpy(texta,name_list[i]);
			strcpy(textb,name_list[j]);
			check = strcmp(texta, textb);
			if(check < 0){
				strcpy(temp, textb);
				strcpy(textb , texta);
				strcpy(texta, temp);
			}
			strcpy(name_list[i],texta);
			strcpy(name_list[j],textb);
		}
	}
	for(int i=0;i<20;i++){
		printf("%s\n", name_list[i]);
	}
	return 0;
}