#include "stdio.h"
int main(){
	int amount, col, row,space;
	scanf("%d", &amount);
	row = amount;
	col = amount;
	space= amount-1;
	for(int i = 1; i<=row; i++){
		for(int j =1; j<=col; j++){
			if(j>space){
				printf("*");
			}else{
				printf(" ");
			}
		}
		col ++;
		space --;
		printf("\n");
	}
	return 0;
}