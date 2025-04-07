#include <stdio.h>

int main()
	{
		float n1, n2, med;
		
		printf("Digite as duas notas obtidas: \n");
		scanf("%f %f", &n1, &n2);
		if((n1 < 0) || (n1 > 10) || (n2 < 0) || (n2 > 10))
		{
			printf("Confira se as notas digitadas estao corretas!\n");
		}
		else
		{
			med = (n1 + n2)/2;
			
			if (med >= 5)
			{
				printf("Aluno aprovado com: %.2f de media", med);
			}
			else 
			{
				printf("Aluno reprovado com:  %.2f de media", med);	
			}
		
		}
		
	} 
	