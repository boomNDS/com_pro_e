#include "stdio.h"
int main(){
	int num;
	scanf("%d", &num);
	for(int i=num;i>0;i--){
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}