#include "stdio.h"
int main(){
	double matrix1[3][3],matrix2[3][3],matrix_AB[3][3];
	for(int i=0;i<3;i++){
			scanf("%lf %lf %lf", &matrix1[i][0],&matrix1[i][1],&matrix1[i][2]);
	}
	for(int i=0;i<3;i++){
			scanf("%lf %lf %lf", &matrix2[i][0],&matrix2[i][1],&matrix2[i][2]);
	}
	printf("A x B\n");
	for(int i=0;i<3;i++){
			matrix_AB[i][0] = (matrix1[i][0]*matrix2[0][0])+(matrix1[i][1]*matrix2[1][0])+(matrix1[i][2]*matrix2[2][0]);
			matrix_AB[i][1] = (matrix1[i][0]*matrix2[0][1])+(matrix1[i][1]*matrix2[1][1])+(matrix1[i][2]*matrix2[2][1]);
			matrix_AB[i][2] = (matrix1[i][0]*matrix2[0][2])+(matrix1[i][1]*matrix2[1][2])+(matrix1[i][2]*matrix2[2][2]);
	}
	for (int i = 0; i < 3; ++i)
	{
		printf("%.2lf %.2lf %.2lf\n", matrix_AB[i][0],matrix_AB[i][1],matrix_AB[i][2]);
	}
	return 0;
}