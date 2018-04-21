#include "stdio.h"
#include "string.h"
int main(){
	char text1[51],text2[41];
	int length,sp1,sp2;
	scanf("%d\n",&length);
	scanf("%[^\n]\n %[^\n]",text1, text2);
	sp1 = (length-2) - strlen(text1);
	sp2 = (length-2) - strlen(text2);
	if(sp1%2==0){
		sp1 /= 2;
	}else{
		sp1+=1;
		sp1 /= 2;
	}
	if(sp2%2==0){
		sp2 /= 2;
	}else{
		sp2+=1;
		sp2 /= 2;
	}
	for(int i = 0;i<4;i++){
		for(int j = 0;j<length;j++){
			if(i==0||i==3){
				printf("*");
			}else if(j == 0){
				printf("*");
			}else if(i==1&&j == length-strlen(text1)){
				printf("*");
			}else if(i==2&&j == length-strlen(text2)){
				printf("*");
			}else if(i==1&&j>0&&j<=sp1){
				printf(" ");
			}else if(i==2&&j>0&&j<=sp2){
				printf(" ");
			}else if(i==1&&j==sp1+1){
				printf("%s", text1);
			}else if(i==2&&j==sp2+1){
				printf("%s", text2);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}