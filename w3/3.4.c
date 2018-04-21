#include "stdio.h"
#include "math.h"
int main(){
	double tri;
	float num1, num2;
	scanf("%f", &num1);
	scanf("%f", &num2);
	tri = sqrt(pow(num1, 2)+pow(num2, 2));
	printf("%.2lf\n", tri);
	return 0;
}