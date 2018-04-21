#include "stdio.h"
int main(){
	int  height,weight,age,count20_h160 = 0,count20_h180_w60 =0,count30_w40_w80=0, count40_w40_h200=0;
	double total_height=0,total_weight=0,total_age=0;
	for(int i=0;i<50;i++){
		scanf("%d %d %d", &age, &height,&weight);
		total_age += age;
		total_weight += weight;
		total_height += height;
		if(age >= 20 && height >= 160){
			count20_h160 += 1;
		}else if(age <20 && (height <= 180 || weight >= 60)){
			count20_h180_w60 += 1;
		}else if(age >= 30 && weight >= 40 && weight <= 80){
			count30_w40_w80 += 1;
		}else if(age < 40 && weight < 85 &&  height <= 200){
			count40_w40_h200 += 1;
		}
	}
	printf("Age >= 20 and Height >= 160: %d\n", count20_h160);
	printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", count20_h180_w60);
	printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", count30_w40_w80);
	printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", count40_w40_h200);
	printf("Average Age: %d\n", total_age/50);
	printf("Average Height: %.2lf\n", total_height/50);
	printf("Average Weight: %.2lf\n", total_weight/50);
	return 0;
}