#include "stdio.h"
int main(){
	int num;
	scanf("%d", &num);
	if(num>=0){
		for(int i=num;i>=0;i--){
			printf("%d ", i);
		}
	}else{
		for(int i=num;i<=0;i++){
			printf("%d ", i);
		}
	}

	printf("\n");
	return 0;
}