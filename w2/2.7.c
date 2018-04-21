#include "stdio.h"
int main()
{
	char text1[40], text2[40], text3[40], text4[40];
	scanf("%s", text1);
	scanf("%s", text2);
	scanf("%s", text3);
	scanf("%s", text4);
	printf("String 1: %.3s\n", text1);
	printf("String 2: %.4s\n", text2);
	printf("String 3: %.5s\n", text3);
	printf("String 4: %.6s\n", text4);
	return 0;
}