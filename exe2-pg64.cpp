#include <stdio.h>
#include <math.h>
int main()
	{
		int idade;
		
		printf("Informe sua idade: \n");
		scanf("%d", &idade);
		
		if (idade < 16)
		{
			printf("Nao-eleitor \n");
		}
		else if ((idade >= 16) && (idade < 18) || (idade > 65))
		{
			printf("Eleitor facultativo\n");
		}
		else if ((idade = 18) && (idade <= 65))
		{
			printf("Eleitor obrigatorio\n");	
		}
		
	} 
	