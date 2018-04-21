#include "stdio.h"
#include "string.h"
int main(){
	int nump,numq,total;
	scanf("%d %d",&nump,&numq);
	total = numq;
	while(1){
		printf("%d\n", total);
		total += numq;
		if(total>20){
			break;
		}
	}
	int len = strlen(total);
	printf("%d\n", len);
	if(total>10000){
		printf("Too Large!!!\n");
	}else{
		printf("%d\n", total);
	}
	return 0;
}