#include "stdio.h"
int main(){
	char text[4];
	scanf("%s", text);
	printf("*****\n");
	printf("*-*-*\n");
	printf("*%.3s*\n", text);
	printf("*-*-*\n");
	printf("*****\n");
	return 0;
}
