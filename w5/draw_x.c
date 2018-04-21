#include "stdio.h"
int main(){
	int amount, col, row,space1,space2;
	scanf("%d", &amount);
	row = amount;
	col = amount;
	space1= 1;
	space2 = amount;
	for(int i = 1; i<=row; i++){
		for(int j =1; j<=col; j++){
			if(j==space1||j==space2){
				printf("-");
			}else{
				printf("#");
			}
		}
		space1++;
		space2--;
		printf("\n");
	}
	return 0;
}