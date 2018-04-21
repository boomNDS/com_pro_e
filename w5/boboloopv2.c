#include "stdio.h"
int main(){
	int num;
	scanf("%d", &num);
	while(num<2||num%2 == 1){
		printf("error\n");
		scanf("%d", &num);
	}
	for(int i =1;i <= num/2;i++){
		printf("%d", i);
	}
	for(int i = num/2;i >= 1;i--){
		printf("%d", i);
	}
	printf("\n");
	return 0;
}