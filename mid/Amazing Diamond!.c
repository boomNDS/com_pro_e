#include "stdio.h"
int main(){
	int num,row;
	scanf("%d", &num);
	num %= 10;
	row = (num*2)+1;
	int show=0,show_dia;
	int spl=row/2,spr=row/2;
	for(int i=0;i<row;i++){
		show_dia = 0;
		for(int j=0;j<row;j++){
			printf("%d",show_dia);
			if(show_dia<=show){
				if(j>=row/2){
					show_dia--;
				}else{
					show_dia++;
				}
			}

		}
		if(i>=row/2){
			show--;
		}else{
			show++;
		}
		printf("\n");
	}
	return 0;
}
// 1-> 3 2
//   0
//  010
// 01210
//  010
//   0 2-> 5 3

//    0 3-> 7 4
//   010
//  01210
// 0123210
//  01210
//   010
//    0