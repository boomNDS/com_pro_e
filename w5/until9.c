#include "stdio.h"
int main(){
	int total, num;
	total = 0;
	scanf("%d", &num);
	while(num!= -9){
		total += num;
		scanf("%d", &num);
	}
	printf("%d\n", total);
	return 0;
}