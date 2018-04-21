#include "stdio.h"

int main() {
	int num;
	scanf("%d", &num);

	printf("%d", num%1000);
	printf("%d", num/1000);

	return 0;
}