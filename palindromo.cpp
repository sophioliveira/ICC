#include <stdio.h>
#include <math.h>

int main()
{
	char nc[26];
	int senha;
	
	printf("Escreva seu nome completo:\n");
	fgets(nc, 26, stdin);
	printf("Informe sua senha:\n");
	scanf("%d", &senha);

	if(nc == "Sophia Passos de Oliveira" && senha == 9230)
	{
		int n, dez, cent, mil, un;
		printf("Informe um numero inteiro positivo com 4 digitos:\n");
		scanf("%d", &n);
		
		if(n> 999 && n < 10000)
		{
			mil = n % 1000;
			cent = n % 100;
			dez = n % 10;
			un = n % 1;
			
			if( mil == un && cent == dez)
			{
				printf("O numero e um palindromo!\n");
			}
			else
			{
				printf("nao e um palindromo!\n");
			}
		}
		
		else
		{
			printf("Numero invalido!\n");
		}
	}
	
	else
	{
		printf("Acesso negado!\n");
	}
}