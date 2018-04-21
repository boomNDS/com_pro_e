#include "stdio.h"
int main(){
	double num1, num2;
	scanf("%lf", &num1);
	scanf("%lf", &num2);
	printf("Perimeter of rectangle = %.4lf units\n", (num2*2)+(num1*2));
	return 0;
}