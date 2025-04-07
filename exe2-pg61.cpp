#include <stdio.h>

int main()
	{
		float num;
		
		printf("Digite um numero: \n");
		scanf("%f", &num);
		if(num > 0)
		{
			printf("O numero e positivo! \n");
		}
		else if(num < 0)
		{	
			printf("O numero e negativo! \n");
		}
		else
		{
			printf("O numero e nulo! \n");
		}
	} 
	