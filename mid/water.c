#include "stdio.h"
int main(){
	int green,tea,what;
	float total=0;
	scanf("%d\n%d\n%d",&green,&tea,&what);
	total += (green>=5) ? (((green-(green%5))/5)*375)+(green%5)*80:green*80;
	total += (tea>=5) ? (((tea-(tea%5))/5)*390)+(tea%5)*90:tea*90;
	printf("%.2f\n", total);
	return 0;
}