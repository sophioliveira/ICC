#include <stdio.h>

int main()
	{
		float n1, n2, n3, media;
		
		printf("Digite as tres notas obtidas pelo aluno: \n", n1, n2, n3);
		scanf("%f %f %f", &n1, &n2, &n3);
		media = (n1 + n2 + n3)/3;
		printf("Nota 1: %f \n Nota 2: %f \n Nota 3: %f \n", n1, n2, n3);
		printf("A media do aluno foi: %f", media);
		
	}
	
