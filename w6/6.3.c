#include "stdio.h"
int main(){
	double matrix1[3][3];
	for(int i=0;i<3;i++){
			scanf("%lf %lf %lf", &matrix1[i][0],&matrix1[i][1],&matrix1[i][2]);
	}
	if(matrix1[0][0]==matrix1[1][1]&&matrix1[1][1]==matrix1[2][2]){
		for(int i;i<3;i++){
			for(int k;k<3;k++){
				if((matrix1[i][k]==0||matrix1[i][k]==0.0)&&k!=i){
					printf("This is a scalar matrix\n");
					return 0;
				}
			}
		}
		printf("This is not a scalar matrix\n");
	}else{
		printf("This is not a scalar matrix\n");
	}
	return 0;
}