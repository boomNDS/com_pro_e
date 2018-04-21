#include "stdio.h"
#include "stdio.h"
int sp = 2;
int main(){
	char text[100],fibo1,fibo2;
	int seq,amount;
	scanf("%c %c %d\n",&fibo1,&fibo2,&seq);
	char fiboss[2] = {fibo1,fibo2};
	amount = seq;
	if(seq == 0){
		return fibo1;
	}else if(seq == 1){
		return fibo2;
	}else{
		return fibo(fibo1,fibo2,seq);
	}
	return 0;
}
// char fibo(char fibo1, char fibo2,int seq){
// 	char fiboss[2] = {fibo1,fibo2};
// 	if(seq == 0){
// 		return fibo1;
// 	}else if(seq == 1){
// 		return fibo2;
// 	}else{
// 		return fibo(fibo1,fibo2,seq);
// 	}
// }