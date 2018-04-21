#include "stdio.h"
int main(){
	int M[] = {2, 20, 8, 10, 4, 6, 16, 18},N[] = {1, 3, 9, 7, 11, 15, 19};
	int num;
	scanf("%d", &num);
	while(num > 20 || num < 1){
		scanf("%d", &num);
	}
	if(num%2==0&& num!=12&&num!=14){
		for(int i = 0;i<8;i++){
			if(M[i]==num){
				printf("%d is in M at index [%d]\n", num,i);
			}
		}
	}else if(num%2==1 &&num!=5&&num!=13&&num!=17){
		for(int i = 0;i<7;i++){
			if(N[i]==num){
				printf("%d is in N at index [%d]\n", num,i);
			}
		}
	}else{
		printf("%d is not in neither M nor N\n", num);
	}
	return 0;
}