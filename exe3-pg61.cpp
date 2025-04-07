#include <stdio.h>
#include <math.h>
int main()
	{
		int num;
		
		printf("Digite um numero: \n");
		scanf("%d", &num);
		
		if (num == 0)
		{
			printf("O numero e nulo! \n");
		}
		else if(num % 2 == 0)
		{
			printf("O numero e par! \n");
		}
		else if(num % 2 != 0)
		{	
			printf("O numero e Impar!\n");
		}
		
	} 
	