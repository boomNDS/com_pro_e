#include "stdio.h"
int main(){
	float price, per, free, dis;
	int amount, per2;
	scanf("%f", &price);
	scanf("%f", &per);
	scanf("%d", &amount);
	per2 = per;
	dis = price*amount*(1-(per/100));
	free = price*(amount-(amount/3));
	if (free < dis){
		printf("Buy 2 Get 1\n");
		printf("%.2f\n", free);
	}else{
		printf("Discount %d%%\n", per2);
		printf("%.2f\n", dis);
	}
	return 0;
}