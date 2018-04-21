#include "stdio.h"
int main(){
	int a,b,isprime=0,pass;
	scanf("%d %d",&a,&b);
	if(a>b){
		for(int i=b+1;i<a;i++){
			for(int j=2;j<i;j++){
				if(i%j==0){
					isprime = 0;
					break;
				}else{
					isprime = 1;
				}
			}
			if(isprime==1){
				printf("%d ", i);
				pass = 1;
			}
		}
	}else{
		for(int i=a+1;i<b;i++){
			for(int j=2;j<i;j++){
				if(i%j==0){
					isprime = 0;
					break;
				}else{
					isprime = 1;
				}
			}
			if(isprime==1){
				printf("%d ", i);
				pass = 1;
			}
		}
	}
	if(isprime==0&&pass!=1){
		printf("Null\n");
	}
	return 0;
}