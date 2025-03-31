#include <stdio.h>

int main()
	{
		float p1, p2, t1, t2, ta, qa, med, freq;
		
		printf("Digite as notas obtidas pelo aluno \n");
		scanf("%f %f %f %f", &p1, &p2, &t1, &t2);
		printf("Digite o total de aulas ministradas \n");
		scanf("%f", &ta);
		printf("Informe a quantidade de presencas do aluno \n");
		scanf("%f", &qa);
		med = (p1 * 2 + p2 * 3 + t1 * 1 + t2 * 2)/ (2 + 3 + 1 + 2);
		freq= (qa * 100)/ta;
		printf("A media do aluno foi: %.1f e sua frequencia e: %.0f %%", med, freq);
		
		
	}
	
