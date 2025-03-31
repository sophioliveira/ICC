#include <stdio.h>
#include <math.h>

int main()
	{
		int x, batidas;
		
		printf("Informe a idade \n");
		scanf("%d", &x);
		batidas = x * 365.25 * 24 * 3600;
		printf("Essa pessoa tem: %.0d anos e o coracao dela vai bater: %.0d vezes", x, batidas);
		
	}
	
