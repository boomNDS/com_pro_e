#include "stdio.h"
int main(){
	int num,count=0,total=0;
	scanf("%d", &num);
	char text[num] = '-';
	int text_count[num] = 0;
	for(int i=8;i<=num;i++){
		count = 0;
		for(int j= i; j>0;j--){
			if(i%j==0){
				count++;
			}
			if(count>9){
				break;
			}
		}
		if(count==8){
			total += i;
		}
	}
	printf("%d\n", total);
	return 0;
}