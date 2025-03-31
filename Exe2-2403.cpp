#include <stdio.h>

int main()
	{
		int ano_at, idade, nasc;
		
		printf("Digite o ano do seu nascimento \n", nasc);
		scanf("%d", &nasc);
		printf("Digite o ano atual \n", ano_at);
		scanf("%d", &ano_at);
		idade = ano_at - nasc;
		printf("Sua idade e: %d", idade);
		
	}
	
