#include "stdio.h"
int main(){
	int num;
	scanf("%d", &num);
	printf("%d%d\n", num%1000,num/1000);
	return 0;
}