#include "stdio.h"
int main(){
	int amount;
	char text;
	scanf("%d", &amount);
	int count[2][1];
	// count[0][0] = 'A';
	// count[1][0] = 'B';
	for(int i = 0; i < amount+2;i++){
		// printf("%d\n", i);
		scanf("%c", &text);
		count[i][0] = text;
		count[i][1] = 1;
	}
	// count[0][1] = text;
	// printf("%c\n", text_w[0]);
	// printf("%c\n", text_w[1]);
	// printf("%c\n", text_w[2]);
	// printf("%c : %d\n", count[0][0],count[0][0]);
	printf("%c : %d\n", count[1][0],count[1][0]);
	// printf("%c : %d\n", count[2][0],count[2][0]);
	return 0;
}