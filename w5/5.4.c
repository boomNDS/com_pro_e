#include "stdio.h"
int main(){
	int amount;
	double numio,num_min,num_max,total;
	total = 0;
	scanf("%d", &amount);
	scanf("%lf", &numio);
	num_max = numio;
	num_min = numio;
	total += numio;
	for(int i = 2; i<= amount;i++){
		scanf("%lf", &numio);
		if(numio > num_max){
			num_max = numio;
		}else if(numio < num_min){
			num_min = numio;
		}
		total += numio;
	}
	printf("%d Values\n", amount);
	printf("Min: %.3lf\n", num_min);
	printf("Max: %.3lf\n", num_max);
	printf("Avg: %.2lf\n", (total/amount));
	return 0;
}