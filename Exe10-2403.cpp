#include <stdio.h>
#include <math.h>

int main()
	{
		char nome[50];
		float sal, salmin, salminf;
		printf("Digite o nome do funcionario\n", nome);
		scanf("%s", &nome);
		printf("Informe o salario atual do funcionario:\n", sal);
		scanf("$f", &sal);
		printf("Informe o valor do salario minimo vigente:\n", salmin);
		scanf("%f", &salmin);
		salminf = sal / salmin;
		printf("O funcionario recebe ", salminf);	
	}
	
