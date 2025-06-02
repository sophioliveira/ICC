#include <stdio.h>
#include <math.h>

int main(){
	int i, j;
	float mat[2] [3];
	
	//entrada de dados
	for (i=0 ; i<2; i++){
		for (j=0; j<3; i++){
			printf("Digite os el. da Matriz:");
			scanf("%f", &mat[i][j]); 
		}
	}
	
	//saida de dados
	for(i=0;i<2; i++){
		for(j=0; j<3; j++){
			printf("%10.2f", mat[i][j]);
		}
		printf("\n");
	}
}