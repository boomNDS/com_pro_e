#include "stdio.h"
int main(){
	int num,i=0;
	scanf("%d", &num);
	while(i<num){
		i++;
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}